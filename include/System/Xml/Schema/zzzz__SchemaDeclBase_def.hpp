#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaDeclBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaDeclBase)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::Schema {
struct SchemaDeclBase_Use;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
struct SchemaDeclBase_Use;
}
namespace System::Xml::Schema {
class SchemaDeclBase;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::SchemaDeclBase_Use);
MARK_REF_PTR_T(::System::Xml::Schema::SchemaDeclBase);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.SchemaDeclBase/Use
struct CORDL_TYPE SchemaDeclBase_Use {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SchemaDeclBase_Use_Unwrapped
  enum struct __SchemaDeclBase_Use_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Required = static_cast<int32_t>(0x1),
    __E_Implied = static_cast<int32_t>(0x2),
    __E_Fixed = static_cast<int32_t>(0x3),
    __E_RequiredFixed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SchemaDeclBase_Use_Unwrapped() const noexcept {
    return static_cast<__SchemaDeclBase_Use_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaDeclBase_Use();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SchemaDeclBase_Use(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::System::Xml::Schema::SchemaDeclBase_Use const Default;

  /// @brief Field Fixed value: I32(3)
  static ::System::Xml::Schema::SchemaDeclBase_Use const Fixed;

  /// @brief Field Implied value: I32(2)
  static ::System::Xml::Schema::SchemaDeclBase_Use const Implied;

  /// @brief Field Required value: I32(1)
  static ::System::Xml::Schema::SchemaDeclBase_Use const Required;

  /// @brief Field RequiredFixed value: I32(4)
  static ::System::Xml::Schema::SchemaDeclBase_Use const RequiredFixed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7618 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase_Use, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaDeclBase_Use, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.SchemaDeclBase::Use
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SchemaDeclBase
class CORDL_TYPE SchemaDeclBase : public ::System::Object {
public:
  // Declarations
  using Use = ::System::Xml::Schema::SchemaDeclBase_Use;

  __declspec(property(get = get_Datatype, put = set_Datatype)) ::System::Xml::Schema::XmlSchemaDatatype* Datatype;

  __declspec(property(get = get_DefaultValueRaw, put = set_DefaultValueRaw)) ::StringW DefaultValueRaw;

  __declspec(property(get = get_DefaultValueTyped, put = set_DefaultValueTyped)) ::System::Object* DefaultValueTyped;

  __declspec(property(get = get_IsDeclaredInExternal, put = set_IsDeclaredInExternal)) bool IsDeclaredInExternal;

  __declspec(property(get = get_MaxLength, put = set_MaxLength)) int64_t MaxLength;

  __declspec(property(get = get_MinLength, put = set_MinLength)) int64_t MinLength;

  __declspec(property(get = get_Name, put = set_Name)) ::System::Xml::XmlQualifiedName* Name;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_Presence, put = set_Presence)) ::System::Xml::Schema::SchemaDeclBase_Use Presence;

  __declspec(property(get = get_SchemaType, put = set_SchemaType)) ::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_Values, put = set_Values)) ::System::Collections::Generic::List_1<::StringW>* Values;

  /// @brief Field datatype, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_datatype, put = __cordl_internal_set_datatype)) ::System::Xml::Schema::XmlSchemaDatatype* datatype;

  /// @brief Field defaultValueRaw, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValueRaw, put = __cordl_internal_set_defaultValueRaw)) ::StringW defaultValueRaw;

  /// @brief Field defaultValueTyped, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValueTyped, put = __cordl_internal_set_defaultValueTyped)) ::System::Object* defaultValueTyped;

  /// @brief Field isDeclaredInExternal, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isDeclaredInExternal, put = __cordl_internal_set_isDeclaredInExternal)) bool isDeclaredInExternal;

  /// @brief Field maxLength, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_maxLength, put = __cordl_internal_set_maxLength)) int64_t maxLength;

  /// @brief Field minLength, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_minLength, put = __cordl_internal_set_minLength)) int64_t minLength;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlQualifiedName* name;

  /// @brief Field prefix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field presence, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_presence, put = __cordl_internal_set_presence)) ::System::Xml::Schema::SchemaDeclBase_Use presence;

  /// @brief Field schemaType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaType, put = __cordl_internal_set_schemaType)) ::System::Xml::Schema::XmlSchemaType* schemaType;

  /// @brief Field values, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::System::Collections::Generic::List_1<::StringW>* values;

  /// @brief Method AddValue, addr 0x4291ca8, size 0xec, virtual false, abstract: false, final false
  inline void AddValue(::StringW value);

  /// @brief Method CheckEnumeration, addr 0x4291e10, size 0xb8, virtual false, abstract: false, final false
  inline bool CheckEnumeration(::System::Object* pVal);

  /// @brief Method CheckValue, addr 0x4291ec8, size 0x50, virtual false, abstract: false, final false
  inline bool CheckValue(::System::Object* pVal);

  static inline ::System::Xml::Schema::SchemaDeclBase* New_ctor();

  static inline ::System::Xml::Schema::SchemaDeclBase* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& __cordl_internal_get_datatype() const;

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __cordl_internal_get_datatype();

  constexpr ::StringW const& __cordl_internal_get_defaultValueRaw() const;

  constexpr ::StringW& __cordl_internal_get_defaultValueRaw();

  constexpr ::System::Object* const& __cordl_internal_get_defaultValueTyped() const;

  constexpr ::System::Object*& __cordl_internal_get_defaultValueTyped();

  constexpr bool const& __cordl_internal_get_isDeclaredInExternal() const;

  constexpr bool& __cordl_internal_get_isDeclaredInExternal();

  constexpr int64_t const& __cordl_internal_get_maxLength() const;

  constexpr int64_t& __cordl_internal_get_maxLength();

  constexpr int64_t const& __cordl_internal_get_minLength() const;

  constexpr int64_t& __cordl_internal_get_minLength();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::System::Xml::Schema::SchemaDeclBase_Use const& __cordl_internal_get_presence() const;

  constexpr ::System::Xml::Schema::SchemaDeclBase_Use& __cordl_internal_get_presence();

  constexpr ::System::Xml::Schema::XmlSchemaType* const& __cordl_internal_get_schemaType() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_schemaType();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_values() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  constexpr void __cordl_internal_set_defaultValueRaw(::StringW value);

  constexpr void __cordl_internal_set_defaultValueTyped(::System::Object* value);

  constexpr void __cordl_internal_set_isDeclaredInExternal(bool value);

  constexpr void __cordl_internal_set_maxLength(int64_t value);

  constexpr void __cordl_internal_set_minLength(int64_t value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_presence(::System::Xml::Schema::SchemaDeclBase_Use value);

  constexpr void __cordl_internal_set_schemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_values(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x4291b70, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4291ae8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method get_Datatype, addr 0x4291c98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();

  /// @brief Method get_DefaultValueRaw, addr 0x4291da4, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DefaultValueRaw();

  /// @brief Method get_DefaultValueTyped, addr 0x4291e00, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_DefaultValueTyped();

  /// @brief Method get_IsDeclaredInExternal, addr 0x4291c44, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDeclaredInExternal();

  /// @brief Method get_MaxLength, addr 0x4291c68, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_MaxLength();

  /// @brief Method get_MinLength, addr 0x4291c78, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_MinLength();

  /// @brief Method get_Name, addr 0x4291bd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_Name();

  /// @brief Method get_Prefix, addr 0x4291be8, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Presence, addr 0x4291c58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaDeclBase_Use get_Presence();

  /// @brief Method get_SchemaType, addr 0x4291c88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_Values, addr 0x4291d94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Values();

  /// @brief Method set_Datatype, addr 0x4291ca0, size 0x8, virtual false, abstract: false, final false
  inline void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  /// @brief Method set_DefaultValueRaw, addr 0x4291df8, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValueRaw(::StringW value);

  /// @brief Method set_DefaultValueTyped, addr 0x4291e08, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValueTyped(::System::Object* value);

  /// @brief Method set_IsDeclaredInExternal, addr 0x4291c4c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDeclaredInExternal(bool value);

  /// @brief Method set_MaxLength, addr 0x4291c70, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxLength(int64_t value);

  /// @brief Method set_MinLength, addr 0x4291c80, size 0x8, virtual false, abstract: false, final false
  inline void set_MinLength(int64_t value);

  /// @brief Method set_Name, addr 0x4291be0, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_Prefix, addr 0x4291c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_Presence, addr 0x4291c60, size 0x8, virtual false, abstract: false, final false
  inline void set_Presence(::System::Xml::Schema::SchemaDeclBase_Use value);

  /// @brief Method set_SchemaType, addr 0x4291c90, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method set_Values, addr 0x4291d9c, size 0x8, virtual false, abstract: false, final false
  inline void set_Values(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaDeclBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaDeclBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaDeclBase(SchemaDeclBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaDeclBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaDeclBase(SchemaDeclBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7619 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field prefix, offset: 0x18, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field isDeclaredInExternal, offset: 0x20, size: 0x1, def value: None
  bool ___isDeclaredInExternal;

  /// @brief Field presence, offset: 0x24, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaDeclBase_Use ___presence;

  /// @brief Field schemaType, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___schemaType;

  /// @brief Field datatype, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaDatatype* ___datatype;

  /// @brief Field defaultValueRaw, offset: 0x38, size: 0x8, def value: None
  ::StringW ___defaultValueRaw;

  /// @brief Field defaultValueTyped, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___defaultValueTyped;

  /// @brief Field maxLength, offset: 0x48, size: 0x8, def value: None
  int64_t ___maxLength;

  /// @brief Field minLength, offset: 0x50, size: 0x8, def value: None
  int64_t ___minLength;

  /// @brief Field values, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___prefix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___isDeclaredInExternal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___presence) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___schemaType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___datatype) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___defaultValueRaw) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___defaultValueTyped) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___maxLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___minLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaDeclBase, ___values) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaDeclBase, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaDeclBase_Use, "System.Xml.Schema", "SchemaDeclBase/Use");
NEED_NO_BOX(::System::Xml::Schema::SchemaDeclBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaDeclBase*, "System.Xml.Schema", "SchemaDeclBase");
