#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeStyleUpdaterTraversal)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine::UIElements::StyleSheets {
struct SelectorMatchRecord;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __VisualTreeStyleUpdaterTraversal____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdaterTraversal;
}
namespace UnityEngine::UIElements {
class __VisualTreeStyleUpdaterTraversal____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6818))
// CS Name: ::VisualTreeStyleUpdaterTraversal::<>c*
class CORDL_TYPE __VisualTreeStyleUpdaterTraversal____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* __9;

  /// @brief Field <>9__24_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__24_0, put = setStaticF___9__24_0))::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* __9__24_0;

  static inline void setStaticF___9(::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* value);

  static inline ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* getStaticF___9();

  static inline void setStaticF___9__24_0(::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* value);

  static inline ::System::Comparison_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* getStaticF___9__24_0();

  static inline ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c* New_ctor();

  /// @brief Method .ctor, addr 0x2dc3340, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ProcessMatchedRules>b__24_0, addr 0x2dc3348, size 0x44, virtual false, abstract: false, final false
  inline int32_t _ProcessMatchedRules_b__24_0(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord a, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord b);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeStyleUpdaterTraversal____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeStyleUpdaterTraversal____c(__VisualTreeStyleUpdaterTraversal____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeStyleUpdaterTraversal____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeStyleUpdaterTraversal____c(__VisualTreeStyleUpdaterTraversal____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeStyleUpdaterTraversal____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeStyleUpdaterTraversal
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7459))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6819))
// CS Name: ::UnityEngine.UIElements::VisualTreeStyleUpdaterTraversal*
class CORDL_TYPE VisualTreeStyleUpdaterTraversal : public ::UnityEngine::UIElements::StyleSheets::HierarchyTraversal {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c;

  /// @brief Field m_ProcessVarContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProcessVarContext, put = __cordl_internal_set_m_ProcessVarContext))::UnityEngine::UIElements::StyleVariableContext* m_ProcessVarContext;

  /// @brief Field m_UpdateList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpdateList,
                      put = __cordl_internal_set_m_UpdateList))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_UpdateList;

  /// @brief Field m_ParentList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParentList,
                      put = __cordl_internal_set_m_ParentList))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* m_ParentList;

  /// @brief Field m_TempMatchResults, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempMatchResults,
                      put = __cordl_internal_set_m_TempMatchResults))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* m_TempMatchResults;

  /// @brief Field <currentPixelsPerPoint>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__currentPixelsPerPoint_k__BackingField,
                      put = __cordl_internal_set__currentPixelsPerPoint_k__BackingField)) float_t _currentPixelsPerPoint_k__BackingField;

  /// @brief Field m_StyleMatchingContext, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StyleMatchingContext, put = __cordl_internal_set_m_StyleMatchingContext))::UnityEngine::UIElements::StyleMatchingContext* m_StyleMatchingContext;

  /// @brief Field m_StylePropertyReader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StylePropertyReader,
                      put = __cordl_internal_set_m_StylePropertyReader))::UnityEngine::UIElements::StyleSheets::StylePropertyReader* m_StylePropertyReader;

  /// @brief Field m_AnimatedProperties, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimatedProperties,
                      put = __cordl_internal_set_m_AnimatedProperties))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* m_AnimatedProperties;

  __declspec(property(get = get_currentPixelsPerPoint, put = set_currentPixelsPerPoint)) float_t currentPixelsPerPoint;

  constexpr ::UnityEngine::UIElements::StyleVariableContext*& __cordl_internal_get_m_ProcessVarContext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleVariableContext*> const& __cordl_internal_get_m_ProcessVarContext() const;

  constexpr void __cordl_internal_set_m_ProcessVarContext(::UnityEngine::UIElements::StyleVariableContext* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_UpdateList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_UpdateList() const;

  constexpr void __cordl_internal_set_m_UpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_ParentList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const& __cordl_internal_get_m_ParentList() const;

  constexpr void __cordl_internal_set_m_ParentList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*& __cordl_internal_get_m_TempMatchResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>*> const&
  __cordl_internal_get_m_TempMatchResults() const;

  constexpr void __cordl_internal_set_m_TempMatchResults(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* value);

  constexpr float_t& __cordl_internal_get__currentPixelsPerPoint_k__BackingField();

  constexpr float_t const& __cordl_internal_get__currentPixelsPerPoint_k__BackingField() const;

  constexpr void __cordl_internal_set__currentPixelsPerPoint_k__BackingField(float_t value);

  constexpr ::UnityEngine::UIElements::StyleMatchingContext*& __cordl_internal_get_m_StyleMatchingContext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleMatchingContext*> const& __cordl_internal_get_m_StyleMatchingContext() const;

  constexpr void __cordl_internal_set_m_StyleMatchingContext(::UnityEngine::UIElements::StyleMatchingContext* value);

  constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*& __cordl_internal_get_m_StylePropertyReader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*> const& __cordl_internal_get_m_StylePropertyReader() const;

  constexpr void __cordl_internal_set_m_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*& __cordl_internal_get_m_AnimatedProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> const&
  __cordl_internal_get_m_AnimatedProperties() const;

  constexpr void __cordl_internal_set_m_AnimatedProperties(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value);

  /// @brief Method get_currentPixelsPerPoint, addr 0x2dc1e6c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_currentPixelsPerPoint();

  /// @brief Method set_currentPixelsPerPoint, addr 0x2dc1e74, size 0x8, virtual false, abstract: false, final false
  inline void set_currentPixelsPerPoint(float_t value);

  /// @brief Method PrepareTraversal, addr 0x2dc1844, size 0x8, virtual false, abstract: false, final false
  inline void PrepareTraversal(float_t pixelsPerPoint);

  /// @brief Method AddChangedElement, addr 0x2dc105c, size 0x80, virtual false, abstract: false, final false
  inline void AddChangedElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);

  /// @brief Method Clear, addr 0x2dc14c8, size 0xa4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method PropagateToChildren, addr 0x2dc1e7c, size 0xd4, virtual false, abstract: false, final false
  inline void PropagateToChildren(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method PropagateToParents, addr 0x2dc1f50, size 0xa8, virtual false, abstract: false, final false
  inline void PropagateToParents(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method OnProcessMatchResult, addr 0x2dc1ff8, size 0x30, virtual false, abstract: false, final false
  static inline void OnProcessMatchResult(::UnityEngine::UIElements::VisualElement* current, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo info);

  /// @brief Method TraverseRecursive, addr 0x2dc2028, size 0x600, virtual true, abstract: false, final false
  inline void TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth);

  /// @brief Method ProcessTransitions, addr 0x2dc2e68, size 0xe4, virtual false, abstract: false, final false
  inline void ProcessTransitions(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> oldStyle, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method ForceUpdateTransitions, addr 0x2dc2f4c, size 0x294, virtual false, abstract: false, final false
  inline void ForceUpdateTransitions(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method CancelAnimationsWithNoTransitionProperty, addr 0x2dc156c, size 0x2c8, virtual false, abstract: false, final false
  inline void CancelAnimationsWithNoTransitionProperty(::UnityEngine::UIElements::VisualElement* element, ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle);

  /// @brief Method ShouldSkipElement, addr 0x2dc2628, size 0x84, virtual false, abstract: false, final false
  inline bool ShouldSkipElement(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method ProcessMatchedRules, addr 0x2dc26ac, size 0x7bc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ComputedStyle ProcessMatchedRules(::UnityEngine::UIElements::VisualElement* element,
                                                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* matchingSelectors);

  /// @brief Method ProcessMatchedVariables, addr 0x2dc31e0, size 0xfc, virtual false, abstract: false, final false
  inline void ProcessMatchedVariables(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule);

  static inline ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* New_ctor();

  /// @brief Method .ctor, addr 0x2dc1920, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdaterTraversal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeStyleUpdaterTraversal(VisualTreeStyleUpdaterTraversal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdaterTraversal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeStyleUpdaterTraversal(VisualTreeStyleUpdaterTraversal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeStyleUpdaterTraversal();

public:
  /// @brief Field m_ProcessVarContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleVariableContext* ___m_ProcessVarContext;

  /// @brief Field m_UpdateList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_UpdateList;

  /// @brief Field m_ParentList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ___m_ParentList;

  /// @brief Field m_TempMatchResults, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord>* ___m_TempMatchResults;

  /// @brief Field <currentPixelsPerPoint>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____currentPixelsPerPoint_k__BackingField;

  /// @brief Field m_StyleMatchingContext, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleMatchingContext* ___m_StyleMatchingContext;

  /// @brief Field m_StylePropertyReader, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* ___m_StylePropertyReader;

  /// @brief Field m_AnimatedProperties, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* ___m_AnimatedProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_ProcessVarContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_UpdateList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_ParentList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_TempMatchResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ____currentPixelsPerPoint_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_StyleMatchingContext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_StylePropertyReader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal, ___m_AnimatedProperties) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*, "UnityEngine.UIElements", "VisualTreeStyleUpdaterTraversal");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeStyleUpdaterTraversal____c*, "UnityEngine.UIElements", "VisualTreeStyleUpdaterTraversal/<>c");
