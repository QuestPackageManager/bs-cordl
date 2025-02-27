#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaParticle_EmptyParticle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaParticle_EmptyParticle)
// Forward declare root types
namespace GlobalNamespace {
class XmlSchemaParticle_EmptyParticle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XmlSchemaParticle_EmptyParticle);
// Dependencies System.Xml.Schema.XmlSchemaParticle
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaParticle/EmptyParticle
class CORDL_TYPE XmlSchemaParticle_EmptyParticle : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  static inline ::GlobalNamespace::XmlSchemaParticle_EmptyParticle* New_ctor();

  /// @brief Method .ctor, addr 0x42cf180, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsEmpty, addr 0x42cf1d4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaParticle_EmptyParticle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle_EmptyParticle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaParticle_EmptyParticle(XmlSchemaParticle_EmptyParticle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle_EmptyParticle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaParticle_EmptyParticle(XmlSchemaParticle_EmptyParticle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XmlSchemaParticle_EmptyParticle, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XmlSchemaParticle_EmptyParticle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XmlSchemaParticle_EmptyParticle*, "System.Xml.Schema", "XmlSchemaParticle/EmptyParticle");
