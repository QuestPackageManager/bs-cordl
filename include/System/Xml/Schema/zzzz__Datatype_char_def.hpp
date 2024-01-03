#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_char)
namespace System {
class Type;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
namespace System {
class Exception;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_char;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_char);
// Type: System.Xml.Schema::Datatype_char
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11681))
// CS Name: ::System.Xml.Schema::Datatype_char*
class CORDL_TYPE Datatype_char : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType))::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType))::System::Type* listValueType;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline void setStaticF_listValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method get_ValueType, addr 0x28bf3c8, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_ListValueType, addr 0x28bf420, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method Compare, addr 0x28bf478, size 0x94, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method ParseValue, addr 0x28bf50c, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  /// @brief Method TryParseValue, addr 0x28bf6e0, size 0xac, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  static inline ::System::Xml::Schema::Datatype_char* New_ctor();

  /// @brief Method .ctor, addr 0x28bf78c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_char", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_char(Datatype_char&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_char", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_char(Datatype_char const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_char();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_char, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_char);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_char*, "System.Xml.Schema", "Datatype_char");
