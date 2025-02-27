#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/InputArrayExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputArrayExtensions)
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class InputArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::InputArrayExtensions);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.InputArrayExtensions
class CORDL_TYPE InputArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool Contains(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value);

  /// @brief Method ContainsReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool ContainsReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOfReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputArrayExtensions(InputArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputArrayExtensions(InputArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::InputArrayExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::InputArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputArrayExtensions*, "UnityEngine.InputSystem.Utilities", "InputArrayExtensions");
