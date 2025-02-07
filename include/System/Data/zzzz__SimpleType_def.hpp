#pragma once
// IWYU pragma private; include "System/Data/SimpleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleType)
namespace System::Collections {
class Hashtable;
}
namespace System::Data::Common {
struct StorageType;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class SimpleType;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SimpleType);
// Dependencies System.Object, System.Runtime.Serialization.ISerializable
namespace System::Data {
// Is value type: false
// CS Name: System.Data.SimpleType
class CORDL_TYPE SimpleType : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseSimpleType)) ::System::Data::SimpleType* BaseSimpleType;

  __declspec(property(get = get_BaseType)) ::StringW BaseType;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_MaxLength, put = set_MaxLength)) int32_t MaxLength;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_SimpleTypeQualifiedName)) ::StringW SimpleTypeQualifiedName;

  __declspec(property(get = get_XmlBaseType)) ::System::Xml::XmlQualifiedName* XmlBaseType;

  /// @brief Field _baseSimpleType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__baseSimpleType, put = __cordl_internal_set__baseSimpleType)) ::System::Data::SimpleType* _baseSimpleType;

  /// @brief Field _baseType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__baseType, put = __cordl_internal_set__baseType)) ::StringW _baseType;

  /// @brief Field _enumeration, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__enumeration, put = __cordl_internal_set__enumeration)) ::StringW _enumeration;

  /// @brief Field _length, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  /// @brief Field _maxExclusive, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__maxExclusive, put = __cordl_internal_set__maxExclusive)) ::StringW _maxExclusive;

  /// @brief Field _maxInclusive, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__maxInclusive, put = __cordl_internal_set__maxInclusive)) ::StringW _maxInclusive;

  /// @brief Field _maxLength, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLength, put = __cordl_internal_set__maxLength)) int32_t _maxLength;

  /// @brief Field _minExclusive, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__minExclusive, put = __cordl_internal_set__minExclusive)) ::StringW _minExclusive;

  /// @brief Field _minInclusive, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__minInclusive, put = __cordl_internal_set__minInclusive)) ::StringW _minInclusive;

  /// @brief Field _minLength, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__minLength, put = __cordl_internal_set__minLength)) int32_t _minLength;

  /// @brief Field _name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _ns, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ns, put = __cordl_internal_set__ns)) ::StringW _ns;

  /// @brief Field _pattern, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pattern, put = __cordl_internal_set__pattern)) ::StringW _pattern;

  /// @brief Field _xmlBaseType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlBaseType, put = __cordl_internal_set__xmlBaseType)) ::System::Xml::XmlQualifiedName* _xmlBaseType;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CanHaveMaxLength, addr 0x418f31c, size 0x64, virtual false, abstract: false, final false
  inline bool CanHaveMaxLength();

  /// @brief Method ConvertToAnnonymousSimpleType, addr 0x418f380, size 0x74, virtual false, abstract: false, final false
  inline void ConvertToAnnonymousSimpleType();

  /// @brief Method CreateByteArrayType, addr 0x418f044, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SimpleType* CreateByteArrayType(::StringW encoding);

  /// @brief Method CreateEnumeratedType, addr 0x418efc4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Data::SimpleType* CreateEnumeratedType(::StringW values);

  /// @brief Method CreateLimitedStringType, addr 0x418f0ac, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Data::SimpleType* CreateLimitedStringType(int32_t length);

  /// @brief Method CreateSimpleType, addr 0x418f12c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Data::SimpleType* CreateSimpleType(::System::Data::Common::StorageType typeCode, ::System::Type* type);

  /// @brief Method HasConflictingDefinition, addr 0x418f21c, size 0x100, virtual false, abstract: false, final false
  inline ::StringW HasConflictingDefinition(::System::Data::SimpleType* otherSimpleType);

  /// @brief Method IsPlainString, addr 0x418e8f4, size 0x138, virtual false, abstract: false, final false
  inline bool IsPlainString();

  /// @brief Method LoadTypeValues, addr 0x418e02c, size 0x890, virtual false, abstract: false, final false
  inline void LoadTypeValues(::System::Xml::Schema::XmlSchemaSimpleType* node);

  static inline ::System::Data::SimpleType* New_ctor(::StringW baseType);

  static inline ::System::Data::SimpleType* New_ctor(::System::Xml::Schema::XmlSchemaSimpleType* node);

  /// @brief Method QualifiedName, addr 0x418eadc, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW QualifiedName(::StringW name);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x418e8bc, size 0x38, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToNode, addr 0x418eb58, size 0x46c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ToNode(::System::Xml::XmlDocument* dc, ::System::Collections::Hashtable* prefixes, bool inRemoting);

  constexpr ::System::Data::SimpleType* const& __cordl_internal_get__baseSimpleType() const;

  constexpr ::System::Data::SimpleType*& __cordl_internal_get__baseSimpleType();

  constexpr ::StringW const& __cordl_internal_get__baseType() const;

  constexpr ::StringW& __cordl_internal_get__baseType();

  constexpr ::StringW const& __cordl_internal_get__enumeration() const;

  constexpr ::StringW& __cordl_internal_get__enumeration();

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr int32_t& __cordl_internal_get__length();

  constexpr ::StringW const& __cordl_internal_get__maxExclusive() const;

  constexpr ::StringW& __cordl_internal_get__maxExclusive();

  constexpr ::StringW const& __cordl_internal_get__maxInclusive() const;

  constexpr ::StringW& __cordl_internal_get__maxInclusive();

  constexpr int32_t const& __cordl_internal_get__maxLength() const;

  constexpr int32_t& __cordl_internal_get__maxLength();

  constexpr ::StringW const& __cordl_internal_get__minExclusive() const;

  constexpr ::StringW& __cordl_internal_get__minExclusive();

  constexpr ::StringW const& __cordl_internal_get__minInclusive() const;

  constexpr ::StringW& __cordl_internal_get__minInclusive();

  constexpr int32_t const& __cordl_internal_get__minLength() const;

  constexpr int32_t& __cordl_internal_get__minLength();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__ns() const;

  constexpr ::StringW& __cordl_internal_get__ns();

  constexpr ::StringW const& __cordl_internal_get__pattern() const;

  constexpr ::StringW& __cordl_internal_get__pattern();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get__xmlBaseType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__xmlBaseType();

  constexpr void __cordl_internal_set__baseSimpleType(::System::Data::SimpleType* value);

  constexpr void __cordl_internal_set__baseType(::StringW value);

  constexpr void __cordl_internal_set__enumeration(::StringW value);

  constexpr void __cordl_internal_set__length(int32_t value);

  constexpr void __cordl_internal_set__maxExclusive(::StringW value);

  constexpr void __cordl_internal_set__maxInclusive(::StringW value);

  constexpr void __cordl_internal_set__maxLength(int32_t value);

  constexpr void __cordl_internal_set__minExclusive(::StringW value);

  constexpr void __cordl_internal_set__minInclusive(::StringW value);

  constexpr void __cordl_internal_set__minLength(int32_t value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__ns(::StringW value);

  constexpr void __cordl_internal_set__pattern(::StringW value);

  constexpr void __cordl_internal_set__xmlBaseType(::System::Xml::XmlQualifiedName* value);

  /// @brief Method .ctor, addr 0x418de80, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseType);

  /// @brief Method .ctor, addr 0x418df0c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaSimpleType* node);

  /// @brief Method get_BaseSimpleType, addr 0x418ea64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::SimpleType* get_BaseSimpleType();

  /// @brief Method get_BaseType, addr 0x418ea2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BaseType();

  /// @brief Method get_Length, addr 0x418ea4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_MaxLength, addr 0x418ea54, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxLength();

  /// @brief Method get_Name, addr 0x418ea3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x418ea44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_SimpleTypeQualifiedName, addr 0x418ea6c, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_SimpleTypeQualifiedName();

  /// @brief Method get_XmlBaseType, addr 0x418ea34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_XmlBaseType();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method set_MaxLength, addr 0x418ea5c, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxLength(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleType(SimpleType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleType(SimpleType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11471 };

  /// @brief Field _baseType, offset: 0x10, size: 0x8, def value: None
  ::StringW ____baseType;

  /// @brief Field _baseSimpleType, offset: 0x18, size: 0x8, def value: None
  ::System::Data::SimpleType* ____baseSimpleType;

  /// @brief Field _xmlBaseType, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ____xmlBaseType;

  /// @brief Field _name, offset: 0x28, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _length, offset: 0x30, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _minLength, offset: 0x34, size: 0x4, def value: None
  int32_t ____minLength;

  /// @brief Field _maxLength, offset: 0x38, size: 0x4, def value: None
  int32_t ____maxLength;

  /// @brief Field _pattern, offset: 0x40, size: 0x8, def value: None
  ::StringW ____pattern;

  /// @brief Field _ns, offset: 0x48, size: 0x8, def value: None
  ::StringW ____ns;

  /// @brief Field _maxExclusive, offset: 0x50, size: 0x8, def value: None
  ::StringW ____maxExclusive;

  /// @brief Field _maxInclusive, offset: 0x58, size: 0x8, def value: None
  ::StringW ____maxInclusive;

  /// @brief Field _minExclusive, offset: 0x60, size: 0x8, def value: None
  ::StringW ____minExclusive;

  /// @brief Field _minInclusive, offset: 0x68, size: 0x8, def value: None
  ::StringW ____minInclusive;

  /// @brief Field _enumeration, offset: 0x70, size: 0x8, def value: None
  ::StringW ____enumeration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SimpleType, ____baseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____baseSimpleType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____xmlBaseType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____minLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____maxLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____pattern) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____ns) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____maxExclusive) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____maxInclusive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____minExclusive) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____minInclusive) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::SimpleType, ____enumeration) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SimpleType, 0x78>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::SimpleType);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SimpleType*, "System.Data", "SimpleType");
