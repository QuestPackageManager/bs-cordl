#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UxmlTypeRestriction)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlTypeRestriction);
// Type: UnityEngine.UIElements::UxmlTypeRestriction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6978))
// CS Name: ::UnityEngine.UIElements::UxmlTypeRestriction*
class CORDL_TYPE UxmlTypeRestriction : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*() noexcept;

  /// @brief Method Equals, addr 0x2e0e688, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other);

  static inline ::UnityEngine::UIElements::UxmlTypeRestriction* New_ctor();

  /// @brief Method .ctor, addr 0x2e0e694, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTypeRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTypeRestriction(UxmlTypeRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTypeRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTypeRestriction(UxmlTypeRestriction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTypeRestriction();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlTypeRestriction, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlTypeRestriction*, "UnityEngine.UIElements", "UxmlTypeRestriction");
