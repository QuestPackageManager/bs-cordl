#pragma once
// IWYU pragma private; include "System/Xml/Serialization/TypeTranslator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeTranslator)
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class TypeTranslator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::TypeTranslator);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.TypeTranslator
class CORDL_TYPE TypeTranslator : public ::System::Object {
public:
  // Declarations
  /// @brief Field nameCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nameCache, put = setStaticF_nameCache)) ::System::Collections::Hashtable* nameCache;

  /// @brief Field nullableTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_nullableTypes, put = setStaticF_nullableTypes)) ::System::Collections::Hashtable* nullableTypes;

  /// @brief Field primitiveArrayTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primitiveArrayTypes, put = setStaticF_primitiveArrayTypes)) ::System::Collections::Hashtable* primitiveArrayTypes;

  /// @brief Field primitiveTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primitiveTypes, put = setStaticF_primitiveTypes)) ::System::Collections::Hashtable* primitiveTypes;

  /// @brief Method FindPrimitiveTypeData, addr 0x436e100, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::TypeData* FindPrimitiveTypeData(::StringW typeName);

  /// @brief Method GetArrayName, addr 0x43693c0, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetArrayName(::StringW elemName);

  /// @brief Method GetPrimitiveTypeData, addr 0x436dea8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(::StringW typeName);

  /// @brief Method GetPrimitiveTypeData, addr 0x436df00, size 0x200, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(::StringW typeName, bool nullable);

  /// @brief Method GetTypeData, addr 0x436d558, size 0x950, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::TypeData* GetTypeData(::System::Type* runtimeType, ::StringW xmlDataType, bool underlyingEnumType);

  /// @brief Method GetTypeData, addr 0x4368a64, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::Serialization::TypeData* GetTypeData(::System::Type* type);

  /// @brief Method ParseArrayType, addr 0x436e1c0, size 0x170, virtual false, abstract: false, final false
  static inline void ParseArrayType(::StringW arrayType, ::ByRef<::StringW> type, ::ByRef<::StringW> ns, ::ByRef<::StringW> dimensions);

  static inline ::System::Collections::Hashtable* getStaticF_nameCache();

  static inline ::System::Collections::Hashtable* getStaticF_nullableTypes();

  static inline ::System::Collections::Hashtable* getStaticF_primitiveArrayTypes();

  static inline ::System::Collections::Hashtable* getStaticF_primitiveTypes();

  static inline void setStaticF_nameCache(::System::Collections::Hashtable* value);

  static inline void setStaticF_nullableTypes(::System::Collections::Hashtable* value);

  static inline void setStaticF_primitiveArrayTypes(::System::Collections::Hashtable* value);

  static inline void setStaticF_primitiveTypes(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTranslator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeTranslator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeTranslator(TypeTranslator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeTranslator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeTranslator(TypeTranslator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::TypeTranslator, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::TypeTranslator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::TypeTranslator*, "System.Xml.Serialization", "TypeTranslator");
