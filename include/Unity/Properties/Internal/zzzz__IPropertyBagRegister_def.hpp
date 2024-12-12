#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/IPropertyBagRegister.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyBagRegister)
// Forward declare root types
namespace Unity::Properties::Internal {
class IPropertyBagRegister;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::IPropertyBagRegister);
// Dependencies
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.IPropertyBagRegister
class CORDL_TYPE IPropertyBagRegister {
public:
  // Declarations
  /// @brief Method Register, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Register();

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyBagRegister", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyBagRegister(IPropertyBagRegister const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::IPropertyBagRegister);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::IPropertyBagRegister*, "Unity.Properties.Internal", "IPropertyBagRegister");
