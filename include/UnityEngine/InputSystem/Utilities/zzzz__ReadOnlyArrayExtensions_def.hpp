#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ReadOnlyArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
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
MARK_REF_T(::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*, "UnityEngine.InputSystem.Utilities", "ReadOnlyArrayExtensions");
// [Extension]
// Dependencies System.IComparable`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArrayExtensions
class CORDL_TYPE ReadOnlyArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
    requires(::cordl_internals::type_constraint<TValue, ::System::IComparable_1<TValue>*>)
  static inline bool Contains(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value);

  /// [Extension]
  /// @brief Method ContainsReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
    requires(::cordl_internals::reference_type_constraint<TValue>)
  static inline bool ContainsReference(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value);

  /// [Extension]
  /// @brief Method HaveEqualReferences, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
  static inline bool HaveEqualReferences(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array1, ::System::Collections::Generic::IReadOnlyList_1<TValue>* array2, int32_t count);

  /// [Extension]
  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
    requires(::cordl_internals::reference_type_constraint<TValue>)
  static inline int32_t IndexOfReference(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyArrayExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyArrayExtensions(ReadOnlyArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyArrayExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyArrayExtensions(ReadOnlyArrayExtensionsconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
