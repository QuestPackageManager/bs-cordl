#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalSenderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SignalSenderAttribute)
// Forward declare root types
namespace GlobalNamespace {
class SignalSenderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalSenderAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: SignalSenderAttribute
class CORDL_TYPE SignalSenderAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::SignalSenderAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x39c4b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalSenderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalSenderAttribute(SignalSenderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalSenderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalSenderAttribute(SignalSenderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalSenderAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalSenderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalSenderAttribute*, "", "SignalSenderAttribute");
