#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEnumerableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IEnumerableExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEnumerableExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IEnumerableExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IEnumerableExtensions*, "UnityEngine.UIElements", "IEnumerableExtensions");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IEnumerableExtensions
class CORDL_TYPE IEnumerableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method HasValues, addr 0x6dadfac, size 0x2c8, virtual false, abstract: false, final false
  static inline bool HasValues(::System::Collections::Generic::IEnumerable_1<::StringW>* collection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IEnumerableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnumerableExtensions(IEnumerableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerableExtensions(IEnumerableExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::IEnumerableExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
