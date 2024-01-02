#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointerEventInternal)
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerEventInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPointerEventInternal);
// Type: UnityEngine.UIElements::IPointerEventInternal
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7197))
// CS Name: ::UnityEngine.UIElements::IPointerEventInternal*
class CORDL_TYPE IPointerEventInternal {
public:
  // Declarations
  __declspec(property(get = get_triggeredByOS, put = set_triggeredByOS)) bool triggeredByOS;

  __declspec(property(get = get_recomputeTopElementUnderPointer, put = set_recomputeTopElementUnderPointer)) bool recomputeTopElementUnderPointer;

  /// @brief Method get_triggeredByOS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_triggeredByOS();

  /// @brief Method set_triggeredByOS, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_triggeredByOS(bool value);

  /// @brief Method get_recomputeTopElementUnderPointer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_recomputeTopElementUnderPointer();

  /// @brief Method set_recomputeTopElementUnderPointer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_recomputeTopElementUnderPointer(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IPointerEventInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPointerEventInternal(IPointerEventInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerEventInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerEventInternal(IPointerEventInternal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPointerEventInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerEventInternal*, "UnityEngine.UIElements", "IPointerEventInternal");
