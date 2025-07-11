#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Manipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IManipulator_def.hpp"
CORDL_MODULE_EXPORT(Manipulator)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Manipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Manipulator);
// Dependencies System.Object, UnityEngine.UIElements.IManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Manipulator
class CORDL_TYPE Manipulator : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::UnityEngine::UIElements::VisualElement* m_Target;

  __declspec(property(get = get_target, put = set_target)) ::UnityEngine::UIElements::VisualElement* target;

  /// @brief Convert operator to "::UnityEngine::UIElements::IManipulator"
  constexpr operator ::UnityEngine::UIElements::IManipulator*() noexcept;

  static inline ::UnityEngine::UIElements::Manipulator* New_ctor();

  /// @brief Method RegisterCallbacksOnTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Target() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x4a40d4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_target, addr 0x4a40f58, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualElement* get_target();

  /// @brief Convert to "::UnityEngine::UIElements::IManipulator"
  constexpr ::UnityEngine::UIElements::IManipulator* i___UnityEngine__UIElements__IManipulator() noexcept;

  /// @brief Method set_target, addr 0x4a41be4, size 0x54, virtual true, abstract: false, final true
  inline void set_target(::UnityEngine::UIElements::VisualElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Manipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Manipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Manipulator(Manipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Manipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Manipulator(Manipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5990 };

  /// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Manipulator, ___m_Target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Manipulator, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Manipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Manipulator*, "UnityEngine.UIElements", "Manipulator");
