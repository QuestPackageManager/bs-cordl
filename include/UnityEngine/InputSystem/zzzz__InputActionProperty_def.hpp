#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionProperty)
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionProperty);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionProperty
struct CORDL_TYPE InputActionProperty {
public:
  // Declarations
  __declspec(property(get = get_action)) ::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_reference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> reference;

  __declspec(property(get = get_serializedAction)) ::UnityEngine::InputSystem::InputAction* serializedAction;

  __declspec(property(get = get_serializedReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> serializedReference;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputAction*>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputActionProperty>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputActionProperty>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>"
  constexpr operator ::System::IEquatable_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*();

  /// @brief Method Equals, addr 0x454e418, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x454e390, size 0x1c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::InputAction* other);

  /// @brief Method Equals, addr 0x454e2ec, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::InputActionProperty other);

  /// @brief Method Equals, addr 0x454e3ac, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::InputActionReference* other);

  /// @brief Method GetHashCode, addr 0x454e4e4, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x454e2d0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method .ctor, addr 0x454e2dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionReference* reference);

  /// @brief Method get_action, addr 0x454e168, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_reference, addr 0x454e2a8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_reference();

  /// @brief Method get_serializedAction, addr 0x454e2c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_serializedAction();

  /// @brief Method get_serializedReference, addr 0x454e2c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_serializedReference();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputActionProperty>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputActionProperty>* i___System__IEquatable_1___UnityEngine__InputSystem__InputActionProperty_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputAction*>* i___System__IEquatable_1___UnityEngine__InputSystem__InputAction__();

  /// @brief Convert to "::System::IEquatable_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>"
  constexpr ::System::IEquatable_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>* i___System__IEquatable_1___UnityW___UnityEngine__InputSystem__InputActionReference__();

  /// @brief Method op_Equality, addr 0x454e580, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::InputActionProperty left, ::UnityEngine::InputSystem::InputActionProperty right);

  /// @brief Method op_Inequality, addr 0x454e5b0, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::InputActionProperty left, ::UnityEngine::InputSystem::InputActionProperty right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionProperty();

  // Ctor Parameters [CppParam { name: "m_UseReference", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "",
  // def_value: None }, CppParam { name: "m_Reference", ty: "::UnityW<::UnityEngine::InputSystem::InputActionReference>", modifiers: "", def_value: None }]
  constexpr InputActionProperty(bool m_UseReference, ::UnityEngine::InputSystem::InputAction* m_Action, ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Reference) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_UseReference, offset: 0x0, size: 0x1, def value: None
  bool m_UseReference;

  /// @brief Field m_Action, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_Reference, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> m_Reference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionProperty, m_UseReference) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionProperty, m_Action) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionProperty, m_Reference) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionProperty, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionProperty, "UnityEngine.InputSystem", "InputActionProperty");
