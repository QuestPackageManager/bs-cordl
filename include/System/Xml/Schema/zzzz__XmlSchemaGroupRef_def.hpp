#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaGroupRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaGroupRef)
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroupRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaGroupRef);
// Type: System.Xml.Schema::XmlSchemaGroupRef
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaGroupRef*
class CORDL_TYPE XmlSchemaGroupRef : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  __declspec(property(get = get_Particle))::System::Xml::Schema::XmlSchemaGroupBase* Particle;

  __declspec(property(get = get_Redefined, put = set_Redefined))::System::Xml::Schema::XmlSchemaGroup* Redefined;

  __declspec(property(get = get_RefName, put = set_RefName))::System::Xml::XmlQualifiedName* RefName;

  /// @brief Field particle, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_particle, put = __cordl_internal_set_particle))::System::Xml::Schema::XmlSchemaGroupBase* particle;

  /// @brief Field refName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_refName, put = __cordl_internal_set_refName))::System::Xml::XmlQualifiedName* refName;

  /// @brief Field refined, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_refined, put = __cordl_internal_set_refined))::System::Xml::Schema::XmlSchemaGroup* refined;

  static inline ::System::Xml::Schema::XmlSchemaGroupRef* New_ctor();

  /// @brief Method SetParticle, addr 0x2e454a8, size 0x8, virtual false, abstract: false, final false
  inline void SetParticle(::System::Xml::Schema::XmlSchemaGroupBase* value);

  constexpr ::System::Xml::Schema::XmlSchemaGroupBase*& __cordl_internal_get_particle();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaGroupBase*> const& __cordl_internal_get_particle() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_refName() const;

  constexpr ::System::Xml::Schema::XmlSchemaGroup*& __cordl_internal_get_refined();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaGroup*> const& __cordl_internal_get_refined() const;

  constexpr void __cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaGroupBase* value);

  constexpr void __cordl_internal_set_refName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_refined(::System::Xml::Schema::XmlSchemaGroup* value);

  /// @brief Method .ctor, addr 0x2e454c0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Particle, addr 0x2e454a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaGroupBase* get_Particle();

  /// @brief Method get_Redefined, addr 0x2e454b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaGroup* get_Redefined();

  /// @brief Method get_RefName, addr 0x2e45498, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_RefName();

  /// @brief Method set_Redefined, addr 0x2e454b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Redefined(::System::Xml::Schema::XmlSchemaGroup* value);

  /// @brief Method set_RefName, addr 0x2e43234, size 0x98, virtual false, abstract: false, final false
  inline void set_RefName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaGroupRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaGroupRef(XmlSchemaGroupRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroupRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaGroupRef(XmlSchemaGroupRef const&) = delete;

  /// @brief Field refName, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___refName;

  /// @brief Field particle, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaGroupBase* ___particle;

  /// @brief Field refined, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaGroup* ___refined;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaGroupRef, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroupRef, ___refName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroupRef, ___particle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroupRef, ___refined) == 0x88, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroupRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroupRef*, "System.Xml.Schema", "XmlSchemaGroupRef");
