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
// CS Name: ::UnityEngine.UIElements::VisualElementFocusChangeTarget*
class CORDL_TYPE VisualElementFocusChangeTarget : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
  // Declarations
  /// @brief Field Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool))::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* Pool;

  /// @brief Field <target>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__target_k__BackingField, put = __cordl_internal_set__target_k__BackingField))::UnityEngine::UIElements::Focusable* _target_k__BackingField;

  __declspec(property(get = get_target, put = set_target))::UnityEngine::UIElements::Focusable* target;

  /// @brief Method ApplyTo, addr 0x3510404, size 0x24, virtual true, abstract: false, final false
  inline void ApplyTo(::UnityEngine::UIElements::FocusController* focusController, ::UnityEngine::UIElements::Focusable* f);

  /// @brief Method Dispose, addr 0x3510380, size 0x84, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetPooled, addr 0x35102f8, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* GetPooled(::UnityEngine::UIElements::Focusable* target);

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* New_ctor();

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get__target_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __cordl_internal_get__target_k__BackingField() const;

  constexpr void __cordl_internal_set__target_k__BackingField(::UnityEngine::UIElements::Focusable* value);

  /// @brief Method .ctor, addr 0x3510428, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* getStaticF_Pool();

  /// @brief Method get_target, addr 0x35104c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* get_target();

  static inline void setStaticF_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* value);

  /// @brief Method set_target, addr 0x35104d0, size 0x8, virtual false, abstract: false, final false
  inline void set_target(::UnityEngine::UIElements::Focusable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFocusChangeTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementFocusChangeTarget(VisualElementFocusChangeTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementFocusChangeTarget(VisualElementFocusChangeTarget const&) = delete;

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
