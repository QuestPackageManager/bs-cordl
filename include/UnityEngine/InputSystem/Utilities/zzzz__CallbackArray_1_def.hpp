#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackArray_1)
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TDelegate> struct CallbackArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::InputSystem::Utilities::CallbackArray_1);
// Type: UnityEngine.InputSystem.Utilities::CallbackArray`1
// SizeInfo { instance_size: 80, native_size: 96, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TDelegate>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 3861 }), TypeDefinitionIndex(TypeDefinitionIndex(6669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6660))
// CS Name: ::UnityEngine.InputSystem.Utilities::CallbackArray`1<TDelegate>
struct CORDL_TYPE CallbackArray_1 {
public:
  // Declarations
  __declspec(property(get = get_length)) int32_t length;

  __declspec(property(get = get_Item)) TDelegate Item[];

  /// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TDelegate get_Item(int32_t index);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method AddCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddCallback(TDelegate dlg);

  /// @brief Method RemoveCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveCallback(TDelegate dlg);

  /// @brief Method LockForChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LockForChanges();

  /// @brief Method UnlockForChanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnlockForChanges();

  // Ctor Parameters [CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Callbacks", ty:
  // "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }, CppParam { name: "m_CallbacksToAdd", ty:
  // "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }, CppParam { name: "m_CallbacksToRemove", ty:
  // "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: None }]
  constexpr CallbackArray_1(bool m_CannotMutateCallbacksArray, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks,
                            ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd,
                            ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackArray_1();

  /// @brief Field m_CannotMutateCallbacksArray, offset: 0x0, size: 0x1, def value: None
  bool m_CannotMutateCallbacksArray;

  /// @brief Field m_Callbacks, offset: 0x8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks;

  /// @brief Field m_CallbacksToAdd, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd;

  /// @brief Field m_CallbacksToRemove, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::CallbackArray_1, "UnityEngine.InputSystem.Utilities", "CallbackArray`1");
