#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertiesInitialization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PropertiesInitialization)
// Forward declare root types
namespace Unity::Properties::Internal {
class PropertiesInitialization;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::PropertiesInitialization);
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.PropertiesInitialization
class CORDL_TYPE PropertiesInitialization : public ::System::Object {
public:
  // Declarations
  /// @brief Method InitializeProperties, addr 0x697da24, size 0x394, virtual false, abstract: false, final false
  static inline void InitializeProperties();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertiesInitialization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertiesInitialization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertiesInitialization(PropertiesInitialization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertiesInitialization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertiesInitialization(PropertiesInitialization const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::PropertiesInitialization, 0x10>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::PropertiesInitialization);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::PropertiesInitialization*, "Unity.Properties.Internal", "PropertiesInitialization");
