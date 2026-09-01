#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlCustomFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlCustomFormatter)
namespace System::Xml::Serialization {
class TypeData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlCustomFormatter;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlCustomFormatter*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlCustomFormatter*, "System.Xml.Serialization", "XmlCustomFormatter");
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlCustomFormatter
class CORDL_TYPE XmlCustomFormatter : public ::System::Object {
public:
  // Declarations
  /// @brief Field allTimeFormats, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_allTimeFormats, put = setStaticF_allTimeFormats)) ::ArrayW<::StringW> allTimeFormats;

  /// @brief Method FromEnum, addr 0x62f3dc0, size 0x278, virtual false, abstract: false, final false
  static inline ::StringW FromEnum(int64_t value, ::ArrayW<::StringW> values, ::ArrayW<int64_t> ids, ::StringW typeName);

  /// @brief Method FromXmlNCName, addr 0x62f4094, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW FromXmlNCName(::StringW ncName);

  /// @brief Method FromXmlName, addr 0x62f4038, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW FromXmlName(::StringW name);

  /// @brief Method FromXmlString, addr 0x62f4dd0, size 0xa98, virtual false, abstract: false, final false
  static inline ::System::Object* FromXmlString(::System::Xml::Serialization::TypeData* type, ::StringW value);

  /// @brief Method ToXmlString, addr 0x62f40f0, size 0xce0, virtual false, abstract: false, final false
  static inline ::StringW ToXmlString(::System::Xml::Serialization::TypeData* type, ::System::Object* value);

  static inline ::ArrayW<::StringW> getStaticF_allTimeFormats();

  static inline void setStaticF_allTimeFormats(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCustomFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlCustomFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlCustomFormatter(XmlCustomFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlCustomFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlCustomFormatter(XmlCustomFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Serialization::XmlCustomFormatter) == 0x10, "Size mismatch!");

} // namespace System::Xml::Serialization
