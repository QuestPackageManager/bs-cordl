#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AncestorFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CountingBloomFilter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AncestorFilter)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AncestorFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AncestorFilter);
// Dependencies System.Object, UnityEngine.UIElements.CountingBloomFilter
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AncestorFilter
class CORDL_TYPE AncestorFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CountingBloomFilter, offset 0x10, size 0x4000
  __declspec(property(get = __cordl_internal_get_m_CountingBloomFilter, put = __cordl_internal_set_m_CountingBloomFilter)) ::UnityEngine::UIElements::CountingBloomFilter m_CountingBloomFilter;

  /// @brief Field m_HashStack, offset 0x4010, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HashStack, put = __cordl_internal_set_m_HashStack)) ::System::Collections::Generic::Stack_1<int32_t>* m_HashStack;

  /// @brief Method AddHash, addr 0x4a11604, size 0x94, virtual false, abstract: false, final false
  inline void AddHash(int32_t hash);

  /// @brief Method IsCandidate, addr 0x4a11698, size 0x58, virtual false, abstract: false, final false
  inline bool IsCandidate(::UnityEngine::UIElements::StyleComplexSelector* complexSel);

  static inline ::UnityEngine::UIElements::AncestorFilter* New_ctor();

  /// @brief Method PopElement, addr 0x4a11920, size 0xf0, virtual false, abstract: false, final false
  inline void PopElement();

  /// @brief Method PushElement, addr 0x4a116f0, size 0x230, virtual false, abstract: false, final false
  inline void PushElement(::UnityEngine::UIElements::VisualElement* element);

  constexpr ::UnityEngine::UIElements::CountingBloomFilter const& __cordl_internal_get_m_CountingBloomFilter() const;

  constexpr ::UnityEngine::UIElements::CountingBloomFilter& __cordl_internal_get_m_CountingBloomFilter();

  constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_m_HashStack() const;

  constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_m_HashStack();

  constexpr void __cordl_internal_set_m_CountingBloomFilter(::UnityEngine::UIElements::CountingBloomFilter value);

  constexpr void __cordl_internal_set_m_HashStack(::System::Collections::Generic::Stack_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x4a11584, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AncestorFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AncestorFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AncestorFilter(AncestorFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AncestorFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AncestorFilter(AncestorFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5727 };

  /// @brief Field m_CountingBloomFilter, offset: 0x10, size: 0x4000, def value: None
  ::UnityEngine::UIElements::CountingBloomFilter ___m_CountingBloomFilter;

  /// @brief Field m_HashStack, offset: 0x4010, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<int32_t>* ___m_HashStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::AncestorFilter, ___m_CountingBloomFilter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AncestorFilter, ___m_HashStack) == 0x4010, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AncestorFilter, 0x4018>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AncestorFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AncestorFilter*, "UnityEngine.UIElements", "AncestorFilter");
