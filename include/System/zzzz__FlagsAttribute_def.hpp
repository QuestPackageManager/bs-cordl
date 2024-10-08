#pragma once
// IWYU pragma private; include "System/FlagsAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(FlagsAttribute)
// Forward declare root types
namespace System {
class FlagsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::FlagsAttribute);
// Type: System::FlagsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::FlagsAttribute*
class CORDL_TYPE FlagsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::FlagsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d5f174, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlagsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlagsAttribute(FlagsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlagsAttribute(FlagsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::FlagsAttribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::FlagsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::FlagsAttribute*, "System", "FlagsAttribute");
