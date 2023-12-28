#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaDeclBase)
namespace System::Xml::Schema {
struct __SchemaDeclBase__Use;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Object;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __SchemaDeclBase__Use;
}
namespace System::Xml::Schema {
class SchemaDeclBase;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__SchemaDeclBase__Use);
MARK_REF_PTR_T(::System::Xml::Schema::SchemaDeclBase);
// Type: ::Use
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11702))
// CS Name: ::SchemaDeclBase::Use
struct CORDL_TYPE __SchemaDeclBase__Use {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SchemaDeclBase__Use_Unwrapped
  enum struct ____SchemaDeclBase__Use_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Required = static_cast<int32_t>(0x1),
    __E_Implied = static_cast<int32_t>(0x2),
    __E_Fixed = static_cast<int32_t>(0x3),
    __E_RequiredFixed = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SchemaDeclBase__Use_Unwrapped() const noexcept {
    return static_cast<____SchemaDeclBase__Use_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SchemaDeclBase__Use(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SchemaDeclBase__Use();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__SchemaDeclBase__Use const Default;

  /// @brief Field Required value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__SchemaDeclBase__Use const Required;

  /// @brief Field Implied value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__SchemaDeclBase__Use const Implied;

  /// @brief Field Fixed value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::__SchemaDeclBase__Use const Fixed;

  /// @brief Field RequiredFixed value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::__SchemaDeclBase__Use const RequiredFixed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__SchemaDeclBase__Use, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::SchemaDeclBase
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11702))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11703))
// CS Name: ::System.Xml.Schema::SchemaDeclBase*
class CORDL_TYPE SchemaDeclBase : public ::System::Object {
public:
  // Declarations
  using Use = ::System::Xml::Schema::__SchemaDeclBase__Use;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Xml::XmlQualifiedName* name;

  /// @brief Field prefix, offset 0x18, size 0x8
  __declspec(property(get = __get_prefix, put = __set_prefix))::StringW prefix;

  /// @brief Field isDeclaredInExternal, offset 0x20, size 0x1
  __declspec(property(get = __get_isDeclaredInExternal, put = __set_isDeclaredInExternal)) bool isDeclaredInExternal;

  /// @brief Field presence, offset 0x24, size 0x4
  __declspec(property(get = __get_presence, put = __set_presence))::System::Xml::Schema::__SchemaDeclBase__Use presence;

  /// @brief Field schemaType, offset 0x28, size 0x8
  __declspec(property(get = __get_schemaType, put = __set_schemaType))::System::Xml::Schema::XmlSchemaType* schemaType;

  /// @brief Field datatype, offset 0x30, size 0x8
  __declspec(property(get = __get_datatype, put = __set_datatype))::System::Xml::Schema::XmlSchemaDatatype* datatype;

  /// @brief Field defaultValueRaw, offset 0x38, size 0x8
  __declspec(property(get = __get_defaultValueRaw, put = __set_defaultValueRaw))::StringW defaultValueRaw;

  /// @brief Field defaultValueTyped, offset 0x40, size 0x8
  __declspec(property(get = __get_defaultValueTyped, put = __set_defaultValueTyped))::System::Object* defaultValueTyped;

  /// @brief Field maxLength, offset 0x48, size 0x8
  __declspec(property(get = __get_maxLength, put = __set_maxLength)) int64_t maxLength;

  /// @brief Field minLength, offset 0x50, size 0x8
  __declspec(property(get = __get_minLength, put = __set_minLength)) int64_t minLength;

  /// @brief Field values, offset 0x58, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::System::Collections::Generic::List_1<::StringW>* values;

  __declspec(property(get = get_Name))::System::Xml::XmlQualifiedName* Name;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_IsDeclaredInExternal, put = set_IsDeclaredInExternal)) bool IsDeclaredInExternal;

  __declspec(property(get = get_Presence, put = set_Presence))::System::Xml::Schema::__SchemaDeclBase__Use Presence;

  __declspec(property(put = set_SchemaType))::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_Datatype, put = set_Datatype))::System::Xml::Schema::XmlSchemaDatatype* Datatype;

  __declspec(property(get = get_Values))::System::Collections::Generic::List_1<::StringW>* Values;

  __declspec(property(get = get_DefaultValueRaw))::StringW DefaultValueRaw;

  __declspec(property(get = get_DefaultValueTyped, put = set_DefaultValueTyped))::System::Object* DefaultValueTyped;

  constexpr ::System::Xml::XmlQualifiedName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_name() const;

  constexpr void __set_name(::System::Xml::XmlQualifiedName* value);

  constexpr ::StringW& __get_prefix();

  constexpr ::StringW const& __get_prefix() const;

  constexpr void __set_prefix(::StringW value);

  constexpr bool& __get_isDeclaredInExternal();

  constexpr bool const& __get_isDeclaredInExternal() const;

  constexpr void __set_isDeclaredInExternal(bool value);

  constexpr ::System::Xml::Schema::__SchemaDeclBase__Use& __get_presence();

  constexpr ::System::Xml::Schema::__SchemaDeclBase__Use const& __get_presence() const;

  constexpr void __set_presence(::System::Xml::Schema::__SchemaDeclBase__Use value);

  constexpr ::System::Xml::Schema::XmlSchemaType*& __get_schemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __get_schemaType() const;

  constexpr void __set_schemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr ::System::Xml::Schema::XmlSchemaDatatype*& __get_datatype();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDatatype*> const& __get_datatype() const;

  constexpr void __set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  constexpr ::StringW& __get_defaultValueRaw();

  constexpr ::StringW const& __get_defaultValueRaw() const;

  constexpr void __set_defaultValueRaw(::StringW value);

  constexpr ::System::Object*& __get_defaultValueTyped();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_defaultValueTyped() const;

  constexpr void __set_defaultValueTyped(::System::Object* value);

  constexpr int64_t& __get_maxLength();

  constexpr int64_t const& __get_maxLength() const;

  constexpr void __set_maxLength(int64_t value);

  constexpr int64_t& __get_minLength();

  constexpr int64_t const& __get_minLength() const;

  constexpr void __set_minLength(int64_t value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_values() const;

  constexpr void __set_values(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::System::Xml::Schema::SchemaDeclBase* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method .ctor addr 0x28c435c size 0x88 virtual false final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  static inline ::System::Xml::Schema::SchemaDeclBase* New_ctor();

  /// @brief Method .ctor addr 0x28c43e8 size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method get_Name addr 0x28c4984 size 0x8 virtual false final false
  inline ::System::Xml::XmlQualifiedName* get_Name();

  /// @brief Method get_Prefix addr 0x28c44a4 size 0x54 virtual false final false
  inline ::StringW get_Prefix();

  /// @brief Method get_IsDeclaredInExternal addr 0x28c498c size 0x8 virtual false final false
  inline bool get_IsDeclaredInExternal();

  /// @brief Method set_IsDeclaredInExternal addr 0x28c4994 size 0xc virtual false final false
  inline void set_IsDeclaredInExternal(bool value);

  /// @brief Method get_Presence addr 0x28c49a0 size 0x8 virtual false final false
  inline ::System::Xml::Schema::__SchemaDeclBase__Use get_Presence();

  /// @brief Method set_Presence addr 0x28c49a8 size 0x8 virtual false final false
  inline void set_Presence(::System::Xml::Schema::__SchemaDeclBase__Use value);

  /// @brief Method set_SchemaType addr 0x28c49b0 size 0x8 virtual false final false
  inline void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method get_Datatype addr 0x28c49b8 size 0x8 virtual false final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();

  /// @brief Method set_Datatype addr 0x28c49c0 size 0x8 virtual false final false
  inline void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* value);

  /// @brief Method AddValue addr 0x28c49c8 size 0xf0 virtual false final false
  inline void AddValue(::StringW value);

  /// @brief Method get_Values addr 0x28c4ab8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_Values();

  /// @brief Method get_DefaultValueRaw addr 0x28c4ac0 size 0x54 virtual false final false
  inline ::StringW get_DefaultValueRaw();

  /// @brief Method get_DefaultValueTyped addr 0x28c4b14 size 0x8 virtual false final false
  inline ::System::Object* get_DefaultValueTyped();

  /// @brief Method set_DefaultValueTyped addr 0x28c4b1c size 0x8 virtual false final false
  inline void set_DefaultValueTyped(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "SchemaDeclBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaDeclBase(SchemaDeclBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaDeclBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaDeclBase(SchemaDeclBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaDeclBase();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field prefix, offset: 0x18, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field isDeclaredInExternal, offset: 0x20, size: 0x1, def value: None
  bool ___isDeclaredInExternal;

  /// @brief Field presence, offset: 0x24, size: 0x4, def value: None
  ::System::Xml::Schema::__SchemaDeclBase__Use ___presence;

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
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaDeclBase, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__SchemaDeclBase__Use, "System.Xml.Schema", "SchemaDeclBase/Use");
NEED_NO_BOX(::System::Xml::Schema::SchemaDeclBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaDeclBase*, "System.Xml.Schema", "SchemaDeclBase");
