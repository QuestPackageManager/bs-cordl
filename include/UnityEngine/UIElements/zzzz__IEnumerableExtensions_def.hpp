#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEnumerableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEnumerableExtensions)
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEnumerableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IEnumerableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IEnumerableExtensions*, "UnityEngine.UIElements", "IEnumerableExtensions");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// [Extension]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IEnumerableExtensions
class CORDL_TYPE IEnumerableExtensions : public ::System::Object {
public:
  // Declarations
  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// [Extension]
  /// @brief Method GetCount, addr 0x724d804, size 0x2bc, virtual false, abstract: false, final false
  static inline int32_t GetCount(::System::Collections::IEnumerable* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IEnumerableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnumerableExtensions(IEnumerableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerableExtensions(IEnumerableExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::IEnumerableExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
