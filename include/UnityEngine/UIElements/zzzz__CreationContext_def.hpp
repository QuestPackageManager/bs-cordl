#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct CreationContext_AttributeOverrideRange;
}
namespace UnityEngine::UIElements {
struct CreationContext_SerializedDataOverrideRange;
}
namespace UnityEngine::UIElements {
struct TemplateAsset_AttributeOverride;
}
namespace UnityEngine::UIElements {
struct TemplateAsset_UxmlSerializedDataOverride;
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
namespace UnityEngine::UIElements {
struct CreationContext_AttributeOverrideRange;
}
namespace UnityEngine::UIElements {
struct CreationContext_SerializedDataOverrideRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CreationContext);
MARK_VAL_T(::UnityEngine::UIElements::CreationContext_AttributeOverrideRange);
MARK_VAL_T(::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CreationContext/AttributeOverrideRange
struct CORDL_TYPE CreationContext_AttributeOverrideRange {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6af10f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualTreeAsset* sourceAsset, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreationContext_AttributeOverrideRange();

  // Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None }, CppParam { name: "attributeOverrides", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*", modifiers: "", def_value: None }]
  constexpr CreationContext_AttributeOverrideRange(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5210 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field sourceAsset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset;

  /// @brief Field attributeOverrides, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CreationContext_AttributeOverrideRange, sourceAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext_AttributeOverrideRange, attributeOverrides) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CreationContext/SerializedDataOverrideRange
struct CORDL_TYPE CreationContext_SerializedDataOverrideRange {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6af10fc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualTreeAsset* sourceAsset,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides, int32_t templateId);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreationContext_SerializedDataOverrideRange();

  // Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None }, CppParam { name: "templateId", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>*",
  // modifiers: "", def_value: None }]
  constexpr CreationContext_SerializedDataOverrideRange(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset, int32_t templateId,
                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5211 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field sourceAsset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> sourceAsset;

  /// @brief Field templateId, offset: 0x8, size: 0x4, def value: None
  int32_t templateId;

  /// @brief Field attributeOverrides, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_UxmlSerializedDataOverride>* attributeOverrides;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange, sourceAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange, templateId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange, attributeOverrides) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CreationContext
struct CORDL_TYPE CreationContext {
public:
  // Declarations
  using AttributeOverrideRange = ::UnityEngine::UIElements::CreationContext_AttributeOverrideRange;

  using SerializedDataOverrideRange = ::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange;

  /// @brief Field Default, offset 0xffffffff, size 0x38
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::UnityEngine::UIElements::CreationContext Default;

  __declspec(property(get = get_attributeOverrides,
                      put = set_attributeOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides;

  __declspec(property(get = get_hasOverrides)) bool hasOverrides;

  __declspec(property(get = get_namesPath, put = set_namesPath)) ::System::Collections::Generic::List_1<::StringW>* namesPath;

  __declspec(property(get = get_serializedDataOverrides,
                      put = set_serializedDataOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* serializedDataOverrides;

  __declspec(property(get = get_slotInsertionPoints,
                      put = set_slotInsertionPoints)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints;

  __declspec(property(get = get_target, put = set_target)) ::UnityEngine::UIElements::VisualElement* target;

  __declspec(property(get = get_veaIdsPath, put = set_veaIdsPath)) ::System::Collections::Generic::List_1<int32_t>* veaIdsPath;

  __declspec(property(get = get_visualTreeAsset, put = set_visualTreeAsset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> visualTreeAsset;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>*();

  /// @brief Method Equals, addr 0x6afd6e4, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6afd7b4, size 0x168, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::CreationContext other);

  /// @brief Method GetHashCode, addr 0x6afd91c, size 0x138, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6afd5cc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides);

  /// @brief Method .ctor, addr 0x6af110c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* serializedDataOverrides,
                    ::UnityEngine::UIElements::VisualTreeAsset* vta, ::UnityEngine::UIElements::VisualElement* target, ::System::Collections::Generic::List_1<int32_t>* veaIdsPath,
                    ::System::Collections::Generic::List_1<::StringW>* namesPath);

  /// @brief Method .ctor, addr 0x6afd644, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* attributeOverrides, ::UnityEngine::UIElements::VisualTreeAsset* vta,
                    ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method .ctor, addr 0x6afd548, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints, ::UnityEngine::UIElements::VisualTreeAsset* vta,
                    ::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method .ctor, addr 0x6afa39c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualTreeAsset* vta);

  static inline ::UnityEngine::UIElements::CreationContext getStaticF_Default();

  /// @brief Method get_attributeOverrides, addr 0x6afd518, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* get_attributeOverrides();

  /// @brief Method get_hasOverrides, addr 0x6af62fc, size 0xc4, virtual false, abstract: false, final false
  inline bool get_hasOverrides();

  /// @brief Method get_namesPath, addr 0x6afd538, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_namesPath();

  /// @brief Method get_serializedDataOverrides, addr 0x6afd528, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* get_serializedDataOverrides();

  /// @brief Method get_slotInsertionPoints, addr 0x6afd508, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* get_slotInsertionPoints();

  /// @brief Method get_target, addr 0x6afd4d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_target();

  /// @brief Method get_veaIdsPath, addr 0x6afd4e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* get_veaIdsPath();

  /// @brief Method get_visualTreeAsset, addr 0x6afd4f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> get_visualTreeAsset();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::CreationContext>* i___System__IEquatable_1___UnityEngine__UIElements__CreationContext_();

  static inline void setStaticF_Default(::UnityEngine::UIElements::CreationContext value);

  /// @brief Method set_attributeOverrides, addr 0x6afd520, size 0x8, virtual false, abstract: false, final false
  inline void set_attributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* value);

  /// @brief Method set_namesPath, addr 0x6afd540, size 0x8, virtual false, abstract: false, final false
  inline void set_namesPath(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_serializedDataOverrides, addr 0x6afd530, size 0x8, virtual false, abstract: false, final false
  inline void set_serializedDataOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* value);

  /// @brief Method set_slotInsertionPoints, addr 0x6afd510, size 0x8, virtual false, abstract: false, final false
  inline void set_slotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_target, addr 0x6afd4e0, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_veaIdsPath, addr 0x6afd4f0, size 0x8, virtual false, abstract: false, final false
  inline void set_veaIdsPath(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method set_visualTreeAsset, addr 0x6afd500, size 0x8, virtual false, abstract: false, final false
  inline void set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreationContext();

  // Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "_veaIdsPath_k__BackingField", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "_visualTreeAsset_k__BackingField", ty:
  // "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None }, CppParam { name: "_slotInsertionPoints_k__BackingField", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "_attributeOverrides_k__BackingField", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>*", modifiers: "", def_value: None }, CppParam { name:
  // "_serializedDataOverrides_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>*", modifiers: "", def_value: None
  // }, CppParam { name: "_namesPath_k__BackingField", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }]
  constexpr CreationContext(::UnityEngine::UIElements::VisualElement* _target_k__BackingField, ::System::Collections::Generic::List_1<int32_t>* _veaIdsPath_k__BackingField,
                            ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _visualTreeAsset_k__BackingField,
                            ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* _slotInsertionPoints_k__BackingField,
                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* _attributeOverrides_k__BackingField,
                            ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* _serializedDataOverrides_k__BackingField,
                            ::System::Collections::Generic::List_1<::StringW>* _namesPath_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5212 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <target>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* _target_k__BackingField;

  /// @brief Field <veaIdsPath>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* _veaIdsPath_k__BackingField;

  /// @brief Field <visualTreeAsset>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _visualTreeAsset_k__BackingField;

  /// @brief Field <slotInsertionPoints>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* _slotInsertionPoints_k__BackingField;

  /// @brief Field <attributeOverrides>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_AttributeOverrideRange>* _attributeOverrides_k__BackingField;

  /// @brief Field <serializedDataOverrides>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange>* _serializedDataOverrides_k__BackingField;

  /// @brief Field <namesPath>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* _namesPath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _target_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _veaIdsPath_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _visualTreeAsset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _slotInsertionPoints_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _attributeOverrides_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _serializedDataOverrides_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::CreationContext, _namesPath_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CreationContext, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CreationContext, "UnityEngine.UIElements", "CreationContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CreationContext_AttributeOverrideRange, "UnityEngine.UIElements", "CreationContext/AttributeOverrideRange");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CreationContext_SerializedDataOverrideRange, "UnityEngine.UIElements", "CreationContext/SerializedDataOverrideRange");
