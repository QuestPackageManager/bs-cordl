#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaGroup)
namespace System::Xml::Schema {
class XmlSchemaGroupBase;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaGroup;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaGroup);
// Type: System.Xml.Schema::XmlSchemaGroup
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaGroup*
class CORDL_TYPE XmlSchemaGroup : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_CanonicalParticle, put = set_CanonicalParticle))::System::Xml::Schema::XmlSchemaParticle* CanonicalParticle;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute))::StringW NameAttribute;

  __declspec(property(get = get_Particle, put = set_Particle))::System::Xml::Schema::XmlSchemaGroupBase* Particle;

  __declspec(property(get = get_QualifiedName))::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_Redefined, put = set_Redefined))::System::Xml::Schema::XmlSchemaGroup* Redefined;

  __declspec(property(get = get_SelfReferenceCount, put = set_SelfReferenceCount)) int32_t SelfReferenceCount;

  /// @brief Field canonicalParticle, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_canonicalParticle, put = __cordl_internal_set_canonicalParticle))::System::Xml::Schema::XmlSchemaParticle* canonicalParticle;

  /// @brief Field name, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field particle, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_particle, put = __cordl_internal_set_particle))::System::Xml::Schema::XmlSchemaGroupBase* particle;

  /// @brief Field qname, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_qname, put = __cordl_internal_set_qname))::System::Xml::XmlQualifiedName* qname;

  /// @brief Field redefined, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_redefined, put = __cordl_internal_set_redefined))::System::Xml::Schema::XmlSchemaGroup* redefined;

  /// @brief Field selfReferenceCount, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_selfReferenceCount, put = __cordl_internal_set_selfReferenceCount)) int32_t selfReferenceCount;

  /// @brief Method Clone, addr 0x2e45428, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  /// @brief Method Clone, addr 0x2e3f35c, size 0x180, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone(::System::Xml::Schema::XmlSchema* parentSchema);

  static inline ::System::Xml::Schema::XmlSchemaGroup* New_ctor();

  /// @brief Method SetQualifiedName, addr 0x2e45420, size 0x8, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaParticle*& __cordl_internal_get_canonicalParticle();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaParticle*> const& __cordl_internal_get_canonicalParticle() const;

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::Schema::XmlSchemaGroupBase*& __cordl_internal_get_particle();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaGroupBase*> const& __cordl_internal_get_particle() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qname();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_qname() const;

  constexpr ::System::Xml::Schema::XmlSchemaGroup*& __cordl_internal_get_redefined();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaGroup*> const& __cordl_internal_get_redefined() const;

  constexpr int32_t const& __cordl_internal_get_selfReferenceCount() const;

  constexpr int32_t& __cordl_internal_get_selfReferenceCount();

  constexpr void __cordl_internal_set_canonicalParticle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaGroupBase* value);

  constexpr void __cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_redefined(::System::Xml::Schema::XmlSchemaGroup* value);

  constexpr void __cordl_internal_set_selfReferenceCount(int32_t value);

  /// @brief Method .ctor, addr 0x2e45430, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanonicalParticle, addr 0x2e453e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* get_CanonicalParticle();

  /// @brief Method get_Name, addr 0x2e453b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x2e45410, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_Particle, addr 0x2e453c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaGroupBase* get_Particle();

  /// @brief Method get_QualifiedName, addr 0x2e453d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_Redefined, addr 0x2e453f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaGroup* get_Redefined();

  /// @brief Method get_SelfReferenceCount, addr 0x2e45400, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SelfReferenceCount();

  /// @brief Method set_CanonicalParticle, addr 0x2e453e8, size 0x8, virtual false, abstract: false, final false
  inline void set_CanonicalParticle(::System::Xml::Schema::XmlSchemaParticle* value);

  /// @brief Method set_Name, addr 0x2e453c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x2e45418, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_Particle, addr 0x2e453d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Particle(::System::Xml::Schema::XmlSchemaGroupBase* value);

  /// @brief Method set_Redefined, addr 0x2e453f8, size 0x8, virtual false, abstract: false, final false
  inline void set_Redefined(::System::Xml::Schema::XmlSchemaGroup* value);

  /// @brief Method set_SelfReferenceCount, addr 0x2e45408, size 0x8, virtual false, abstract: false, final false
  inline void set_SelfReferenceCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaGroup(XmlSchemaGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaGroup(XmlSchemaGroup const&) = delete;

  /// @brief Field name, offset: 0x50, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field particle, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaGroupBase* ___particle;

  /// @brief Field canonicalParticle, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaParticle* ___canonicalParticle;

  /// @brief Field qname, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qname;

  /// @brief Field redefined, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaGroup* ___redefined;

  /// @brief Field selfReferenceCount, offset: 0x78, size: 0x4, def value: None
  int32_t ___selfReferenceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaGroup, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroup, ___name) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroup, ___particle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroup, ___canonicalParticle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroup, ___qname) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroup, ___redefined) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaGroup, ___selfReferenceCount) == 0x78, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaGroup*, "System.Xml.Schema", "XmlSchemaGroup");
