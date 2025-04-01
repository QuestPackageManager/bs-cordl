#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTypeRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UxmlTypeRestriction)
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlTypeRestriction);
// Dependencies System.IEquatable`1<T>, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlTypeRestriction
class CORDL_TYPE UxmlTypeRestriction : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*() noexcept;

  /// @brief Method Equals, addr 0x4a9f018, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other);

  static inline ::UnityEngine::UIElements::UxmlTypeRestriction* New_ctor();

  /// @brief Method .ctor, addr 0x4a9f024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>* i___System__IEquatable_1___UnityEngine__UIElements__UxmlTypeRestriction__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTypeRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlTypeRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTypeRestriction(UxmlTypeRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTypeRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTypeRestriction(UxmlTypeRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6284 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlTypeRestriction, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlTypeRestriction*, "UnityEngine.UIElements", "UxmlTypeRestriction");
