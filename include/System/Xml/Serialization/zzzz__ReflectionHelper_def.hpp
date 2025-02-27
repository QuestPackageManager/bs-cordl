#pragma once
// IWYU pragma private; include "System/Xml/Serialization/ReflectionHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionHelper)
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class ReflectionHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::ReflectionHelper);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.ReflectionHelper
class CORDL_TYPE ReflectionHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _clrTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__clrTypes, put = __cordl_internal_set__clrTypes)) ::System::Collections::Hashtable* _clrTypes;

  /// @brief Field _schemaTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaTypes, put = __cordl_internal_set__schemaTypes)) ::System::Collections::Hashtable* _schemaTypes;

  /// @brief Field empty_modifiers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_empty_modifiers, put = setStaticF_empty_modifiers)) ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>
      empty_modifiers;

  /// @brief Method CheckSerializableType, addr 0x4375c54, size 0x2dc, virtual false, abstract: false, final false
  static inline void CheckSerializableType(::System::Type* type, bool allowPrivateConstructors);

  /// @brief Method GetRegisteredClrType, addr 0x4375aec, size 0x168, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* GetRegisteredClrType(::System::Type* type, ::StringW ns);

  /// @brief Method GetRegisteredSchemaType, addr 0x43758c0, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* GetRegisteredSchemaType(::StringW xmlType, ::StringW ns);

  static inline ::System::Xml::Serialization::ReflectionHelper* New_ctor();

  /// @brief Method RegisterClrType, addr 0x4375994, size 0x158, virtual false, abstract: false, final false
  inline void RegisterClrType(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Type* type, ::StringW ns);

  /// @brief Method RegisterSchemaType, addr 0x43757f4, size 0xcc, virtual false, abstract: false, final false
  inline void RegisterSchemaType(::System::Xml::Serialization::XmlTypeMapping* map, ::StringW xmlType, ::StringW ns);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__clrTypes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__clrTypes();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__schemaTypes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__schemaTypes();

  constexpr void __cordl_internal_set__clrTypes(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__schemaTypes(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x4375f9c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> getStaticF_empty_modifiers();

  static inline void setStaticF_empty_modifiers(::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionHelper(ReflectionHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionHelper(ReflectionHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7398 };

  /// @brief Field _clrTypes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____clrTypes;

  /// @brief Field _schemaTypes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____schemaTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::ReflectionHelper, ____clrTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ReflectionHelper, ____schemaTypes) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::ReflectionHelper, 0x20>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::ReflectionHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::ReflectionHelper*, "System.Xml.Serialization", "ReflectionHelper");
