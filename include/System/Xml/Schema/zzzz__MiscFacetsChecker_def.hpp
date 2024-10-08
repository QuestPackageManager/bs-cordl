#pragma once
// IWYU pragma private; include "System/Xml/Schema/MiscFacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
CORDL_MODULE_EXPORT(MiscFacetsChecker)
// Forward declare root types
namespace System::Xml::Schema {
class MiscFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::MiscFacetsChecker);
// Type: System.Xml.Schema::MiscFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::MiscFacetsChecker*
class CORDL_TYPE MiscFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  static inline ::System::Xml::Schema::MiscFacetsChecker* New_ctor();

  /// @brief Method .ctor, addr 0x41ea854, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscFacetsChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MiscFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscFacetsChecker(MiscFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscFacetsChecker(MiscFacetsChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::MiscFacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::MiscFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::MiscFacetsChecker*, "System.Xml.Schema", "MiscFacetsChecker");
