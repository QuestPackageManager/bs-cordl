#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/IInputActionCollection2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IInputActionCollection2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::IInputActionCollection2);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, UnityEngine.InputSystem.IInputActionCollection
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.IInputActionCollection2
class CORDL_TYPE IInputActionCollection2 {
public:
  // Declarations
  __declspec(property(get = get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Method FindAction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ::ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method get_bindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection* i___UnityEngine__InputSystem__IInputActionCollection() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IInputActionCollection2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputActionCollection2(IInputActionCollection2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::IInputActionCollection2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::IInputActionCollection2*, "UnityEngine.InputSystem", "IInputActionCollection2");
