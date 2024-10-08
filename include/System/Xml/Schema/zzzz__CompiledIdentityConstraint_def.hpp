#pragma once
// IWYU pragma private; include "System/Xml/Schema/CompiledIdentityConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompiledIdentityConstraint)
namespace System::Xml::Schema {
class Asttree;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
struct __CompiledIdentityConstraint__ConstraintRole;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __CompiledIdentityConstraint__ConstraintRole;
}
namespace System::Xml::Schema {
class CompiledIdentityConstraint;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole);
MARK_REF_PTR_T(::System::Xml::Schema::CompiledIdentityConstraint);
// Type: ::ConstraintRole
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::CompiledIdentityConstraint::ConstraintRole
struct CORDL_TYPE __CompiledIdentityConstraint__ConstraintRole {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CompiledIdentityConstraint__ConstraintRole_Unwrapped
  enum struct ____CompiledIdentityConstraint__ConstraintRole_Unwrapped : int32_t {
    __E_Unique = static_cast<int32_t>(0x0),
    __E_Key = static_cast<int32_t>(0x1),
    __E_Keyref = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CompiledIdentityConstraint__ConstraintRole_Unwrapped() const noexcept {
    return static_cast<____CompiledIdentityConstraint__ConstraintRole_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CompiledIdentityConstraint__ConstraintRole();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CompiledIdentityConstraint__ConstraintRole(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Key value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole const Key;

  /// @brief Field Keyref value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole const Keyref;

  /// @brief Field Unique value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole const Unique;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7451 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::CompiledIdentityConstraint
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::CompiledIdentityConstraint*
class CORDL_TYPE CompiledIdentityConstraint : public ::System::Object {
public:
  // Declarations
  using ConstraintRole = ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Xml::Schema::CompiledIdentityConstraint* Empty;

  __declspec(property(get = get_Fields)) ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> Fields;

  __declspec(property(get = get_Role)) ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole Role;

  __declspec(property(get = get_Selector)) ::System::Xml::Schema::Asttree* Selector;

  /// @brief Field fields, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fields, put = __cordl_internal_set_fields)) ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> fields;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlQualifiedName* name;

  /// @brief Field refer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_refer, put = __cordl_internal_set_refer)) ::System::Xml::XmlQualifiedName* refer;

  /// @brief Field role, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_role, put = __cordl_internal_set_role)) ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole role;

  /// @brief Field selector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_selector, put = __cordl_internal_set_selector)) ::System::Xml::Schema::Asttree* selector;

  static inline ::System::Xml::Schema::CompiledIdentityConstraint* New_ctor();

  static inline ::System::Xml::Schema::CompiledIdentityConstraint* New_ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, ::System::Xml::XmlNamespaceManager* nsmgr);

  constexpr ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> const& __cordl_internal_get_fields() const;

  constexpr ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*>& __cordl_internal_get_fields();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refer();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_refer() const;

  constexpr ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole const& __cordl_internal_get_role() const;

  constexpr ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole& __cordl_internal_get_role();

  constexpr ::System::Xml::Schema::Asttree*& __cordl_internal_get_selector();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Asttree*> const& __cordl_internal_get_selector() const;

  constexpr void __cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_refer(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_role(::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole value);

  constexpr void __cordl_internal_set_selector(::System::Xml::Schema::Asttree* value);

  /// @brief Method .ctor, addr 0x43215f8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4321664, size 0x494, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, ::System::Xml::XmlNamespaceManager* nsmgr);

  static inline ::System::Xml::Schema::CompiledIdentityConstraint* getStaticF_Empty();

  /// @brief Method get_Fields, addr 0x43215f0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> get_Fields();

  /// @brief Method get_Role, addr 0x43215e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole get_Role();

  /// @brief Method get_Selector, addr 0x43215e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::Asttree* get_Selector();

  static inline void setStaticF_Empty(::System::Xml::Schema::CompiledIdentityConstraint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompiledIdentityConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompiledIdentityConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompiledIdentityConstraint(CompiledIdentityConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompiledIdentityConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompiledIdentityConstraint(CompiledIdentityConstraint const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field role, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole ___role;

  /// @brief Field selector, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::Asttree* ___selector;

  /// @brief Field fields, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> ___fields;

  /// @brief Field refer, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___refer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7452 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::CompiledIdentityConstraint, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___role) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___selector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___fields) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::CompiledIdentityConstraint, ___refer) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__CompiledIdentityConstraint__ConstraintRole, "System.Xml.Schema", "CompiledIdentityConstraint/ConstraintRole");
NEED_NO_BOX(::System::Xml::Schema::CompiledIdentityConstraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::CompiledIdentityConstraint*, "System.Xml.Schema", "CompiledIdentityConstraint");
