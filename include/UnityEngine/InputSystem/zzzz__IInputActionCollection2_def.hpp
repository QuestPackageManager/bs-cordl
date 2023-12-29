#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::IInputActionCollection2);
// Type: UnityEngine.InputSystem::IInputActionCollection2
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6214))
// CS Name: ::UnityEngine.InputSystem::IInputActionCollection2*
class CORDL_TYPE IInputActionCollection2 {
public:
  // Declarations
  __declspec(property(get = get_bindings))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_bindings addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Method FindAction addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction*> action);

  // Ctor Parameters [CppParam { name: "", ty: "IInputActionCollection2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInputActionCollection2(IInputActionCollection2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInputActionCollection2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInputActionCollection2(IInputActionCollection2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::IInputActionCollection2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::IInputActionCollection2*, "UnityEngine.InputSystem", "IInputActionCollection2");
