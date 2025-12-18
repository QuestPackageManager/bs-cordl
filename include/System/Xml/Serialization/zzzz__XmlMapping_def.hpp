#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__SerializationFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlMapping)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Serialization {
class ObjectMap;
}
namespace System::Xml::Serialization {
struct SerializationFormat;
}
namespace System::Xml::Serialization {
class SerializationSource;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlMapping);
// Dependencies System.Object, System.Xml.Serialization.SerializationFormat
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlMapping
class CORDL_TYPE XmlMapping : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ElementName)) ::StringW ElementName;

  __declspec(property(get = get_Format, put = set_Format)) ::System::Xml::Serialization::SerializationFormat Format;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_ObjectMap, put = set_ObjectMap)) ::System::Xml::Serialization::ObjectMap* ObjectMap;

  __declspec(property(get = get_RelatedMaps, put = set_RelatedMaps)) ::System::Collections::ArrayList* RelatedMaps;

  __declspec(property(get = get_Source)) ::System::Xml::Serialization::SerializationSource* Source;

  /// @brief Field _elementName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__elementName, put = __cordl_internal_set__elementName)) ::StringW _elementName;

  /// @brief Field _namespace, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__namespace, put = __cordl_internal_set__namespace)) ::StringW _namespace;

  /// @brief Field format, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) ::System::Xml::Serialization::SerializationFormat format;

  /// @brief Field key, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::StringW key;

  /// @brief Field map, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_map, put = __cordl_internal_set_map)) ::System::Xml::Serialization::ObjectMap* map;

  /// @brief Field relatedMaps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_relatedMaps, put = __cordl_internal_set_relatedMaps)) ::System::Collections::ArrayList* relatedMaps;

  /// @brief Field source, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::System::Xml::Serialization::SerializationSource* source;

  static inline ::System::Xml::Serialization::XmlMapping* New_ctor(::StringW elementName, ::StringW ns);

  /// @brief Method SetKey, addr 0x6141938, size 0x8, virtual false, abstract: false, final false
  inline void SetKey(::StringW key);

  constexpr ::StringW const& __cordl_internal_get__elementName() const;

  constexpr ::StringW& __cordl_internal_get__elementName();

  constexpr ::StringW const& __cordl_internal_get__namespace() const;

  constexpr ::StringW& __cordl_internal_get__namespace();

  constexpr ::System::Xml::Serialization::SerializationFormat const& __cordl_internal_get_format() const;

  constexpr ::System::Xml::Serialization::SerializationFormat& __cordl_internal_get_format();

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr ::System::Xml::Serialization::ObjectMap* const& __cordl_internal_get_map() const;

  constexpr ::System::Xml::Serialization::ObjectMap*& __cordl_internal_get_map();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_relatedMaps() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_relatedMaps();

  constexpr ::System::Xml::Serialization::SerializationSource* const& __cordl_internal_get_source() const;

  constexpr ::System::Xml::Serialization::SerializationSource*& __cordl_internal_get_source();

  constexpr void __cordl_internal_set__elementName(::StringW value);

  constexpr void __cordl_internal_set__namespace(::StringW value);

  constexpr void __cordl_internal_set_format(::System::Xml::Serialization::SerializationFormat value);

  constexpr void __cordl_internal_set_key(::StringW value);

  constexpr void __cordl_internal_set_map(::System::Xml::Serialization::ObjectMap* value);

  constexpr void __cordl_internal_set_relatedMaps(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_source(::System::Xml::Serialization::SerializationSource* value);

  /// @brief Method .ctor, addr 0x6141920, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW elementName, ::StringW ns);

  /// @brief Method get_ElementName, addr 0x6141928, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ElementName();

  /// @brief Method get_Format, addr 0x6141960, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::SerializationFormat get_Format();

  /// @brief Method get_Namespace, addr 0x6141930, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ObjectMap, addr 0x6141940, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::ObjectMap* get_ObjectMap();

  /// @brief Method get_RelatedMaps, addr 0x6141950, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* get_RelatedMaps();

  /// @brief Method get_Source, addr 0x6141970, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::SerializationSource* get_Source();

  /// @brief Method set_Format, addr 0x6141968, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::System::Xml::Serialization::SerializationFormat value);

  /// @brief Method set_ObjectMap, addr 0x6141948, size 0x8, virtual false, abstract: false, final false
  inline void set_ObjectMap(::System::Xml::Serialization::ObjectMap* value);

  /// @brief Method set_RelatedMaps, addr 0x6141958, size 0x8, virtual false, abstract: false, final false
  inline void set_RelatedMaps(::System::Collections::ArrayList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlMapping(XmlMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlMapping(XmlMapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9490 };

  /// @brief Field map, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::ObjectMap* ___map;

  /// @brief Field relatedMaps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___relatedMaps;

  /// @brief Field format, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::Serialization::SerializationFormat ___format;

  /// @brief Field source, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::SerializationSource* ___source;

  /// @brief Field _elementName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____elementName;

  /// @brief Field _namespace, offset: 0x38, size: 0x8, def value: None
  ::StringW ____namespace;

  /// @brief Field key, offset: 0x40, size: 0x8, def value: None
  ::StringW ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ___map) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ___relatedMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ___format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ___source) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ____elementName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ____namespace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMapping, ___key) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlMapping, 0x48>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlMapping*, "System.Xml.Serialization", "XmlMapping");
