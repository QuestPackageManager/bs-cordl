#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
CORDL_MODULE_EXPORT(VisualElementFocusChangeTarget)
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusChangeTarget;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFocusChangeTarget);
// Type: UnityEngine.UIElements::VisualElementFocusChangeTarget
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6794))
// CS Name: ::UnityEngine.UIElements::VisualElementFocusChangeTarget*
class CORDL_TYPE VisualElementFocusChangeTarget : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
  // Declarations
  /// @brief Field <target>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__target_k__BackingField, put = __set__target_k__BackingField))::UnityEngine::UIElements::Focusable* _target_k__BackingField;

  /// @brief Field Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool))::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* Pool;

  __declspec(property(get = get_target, put = set_target))::UnityEngine::UIElements::Focusable* target;

  constexpr ::UnityEngine::UIElements::Focusable*& __get__target_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __get__target_k__BackingField() const;

  constexpr void __set__target_k__BackingField(::UnityEngine::UIElements::Focusable* value);

  static inline void setStaticF_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* getStaticF_Pool();

  /// @brief Method GetPooled, addr 0x2dbb45c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* GetPooled(::UnityEngine::UIElements::Focusable* target);

  /// @brief Method Dispose, addr 0x2dbb4e4, size 0x84, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method ApplyTo, addr 0x2dbb568, size 0x24, virtual true, abstract: false, final false
  inline void ApplyTo(::UnityEngine::UIElements::FocusController* focusController, ::UnityEngine::UIElements::Focusable* f);

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* New_ctor();

  /// @brief Method .ctor, addr 0x2dbb58c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_target, addr 0x2dbb62c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* get_target();

  /// @brief Method set_target, addr 0x2dbb634, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::Focusable* value);

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementFocusChangeTarget(VisualElementFocusChangeTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementFocusChangeTarget(VisualElementFocusChangeTarget const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFocusChangeTarget();

public:
  /// @brief Field <target>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ____target_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFocusChangeTarget, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusChangeTarget, ____target_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusChangeTarget);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusChangeTarget*, "UnityEngine.UIElements", "VisualElementFocusChangeTarget");
