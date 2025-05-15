#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFocusChangeTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
namespace UnityEngine::UIElements {
class VisualElementFocusChangeTarget___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusChangeTarget;
}
namespace UnityEngine::UIElements {
class VisualElementFocusChangeTarget___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFocusChangeTarget);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFocusChangeTarget___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementFocusChangeTarget/<>c
class CORDL_TYPE VisualElementFocusChangeTarget___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::VisualElementFocusChangeTarget___c* __9;

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget___c* New_ctor();

  /// @brief Method <.cctor>b__9_0, addr 0x499f2d0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* __cctor_b__9_0();

  /// @brief Method .ctor, addr 0x499f2c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::VisualElementFocusChangeTarget___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFocusChangeTarget___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementFocusChangeTarget___c(VisualElementFocusChangeTarget___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementFocusChangeTarget___c(VisualElementFocusChangeTarget___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6323 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFocusChangeTarget___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FocusChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementFocusChangeTarget
class CORDL_TYPE VisualElementFocusChangeTarget : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::VisualElementFocusChangeTarget___c;

  /// @brief Field Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pool, put = setStaticF_Pool)) ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* Pool;

  /// @brief Field <target>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__target_k__BackingField, put = __cordl_internal_set__target_k__BackingField)) ::UnityEngine::UIElements::Focusable* _target_k__BackingField;

  __declspec(property(get = get_target, put = set_target)) ::UnityEngine::UIElements::Focusable* target;

  /// @brief Method ApplyTo, addr 0x499f070, size 0x3c, virtual true, abstract: false, final false
  inline void ApplyTo(::UnityEngine::UIElements::FocusController* focusController, ::UnityEngine::UIElements::Focusable* f);

  /// @brief Method Dispose, addr 0x499efec, size 0x84, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetPooled, addr 0x499ef64, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* GetPooled(::UnityEngine::UIElements::Focusable* target);

  static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* New_ctor();

  constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get__target_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get__target_k__BackingField();

  constexpr void __cordl_internal_set__target_k__BackingField(::UnityEngine::UIElements::Focusable* value);

  /// @brief Method .ctor, addr 0x499f0ac, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* getStaticF_Pool();

  /// @brief Method get_target, addr 0x499f14c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* get_target();

  static inline void setStaticF_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* value);

  /// @brief Method set_target, addr 0x499f154, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6324 };

  /// @brief Field <target>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ____target_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusChangeTarget, ____target_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFocusChangeTarget, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusChangeTarget);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusChangeTarget*, "UnityEngine.UIElements", "VisualElementFocusChangeTarget");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusChangeTarget___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusChangeTarget___c*, "UnityEngine.UIElements", "VisualElementFocusChangeTarget/<>c");
