#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyArrayExtensions)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ReadOnlyArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions);
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArrayExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6702))
// CS Name: ::UnityEngine.InputSystem.Utilities::ReadOnlyArrayExtensions*
class CORDL_TYPE ReadOnlyArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool Contains(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value);

  /// @brief Method ContainsReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline bool ContainsReference(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline int32_t IndexOfReference(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value);

  /// @brief Method HaveEqualReferences, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
  static inline bool HaveEqualReferences(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array1, ::System::Collections::Generic::IReadOnlyList_1<TValue>* array2, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyArrayExtensions(ReadOnlyArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyArrayExtensions(ReadOnlyArrayExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyArrayExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*, "UnityEngine.InputSystem.Utilities", "ReadOnlyArrayExtensions");
