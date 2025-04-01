#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/DefaultPropertyBagInitializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultPropertyBagInitializer)
// Forward declare root types
namespace Unity::Properties::Internal {
class DefaultPropertyBagInitializer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::DefaultPropertyBagInitializer);
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.DefaultPropertyBagInitializer
class CORDL_TYPE DefaultPropertyBagInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x490f5d0, size 0x330, virtual false, abstract: false, final false
  static inline void Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultPropertyBagInitializer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyBagInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultPropertyBagInitializer(DefaultPropertyBagInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyBagInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultPropertyBagInitializer(DefaultPropertyBagInitializer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17494 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::DefaultPropertyBagInitializer, 0x10>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::DefaultPropertyBagInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::DefaultPropertyBagInitializer*, "Unity.Properties.Internal", "DefaultPropertyBagInitializer");
