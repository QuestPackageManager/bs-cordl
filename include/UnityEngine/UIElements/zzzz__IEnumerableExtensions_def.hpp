#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEnumerableExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IEnumerableExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEnumerableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IEnumerableExtensions);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IEnumerableExtensions
class CORDL_TYPE IEnumerableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method HasValues, addr 0x4a40740, size 0x2f8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IEnumerableExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IEnumerableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEnumerableExtensions*, "UnityEngine.UIElements", "IEnumerableExtensions");
