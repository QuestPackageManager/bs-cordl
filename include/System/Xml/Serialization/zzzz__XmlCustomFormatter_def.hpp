#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Xml::Serialization::XmlCustomFormatter);
// Type: System.Xml.Serialization::XmlCustomFormatter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlCustomFormatter*
class CORDL_TYPE XmlCustomFormatter : public ::System::Object {
public:
  // Declarations
  /// @brief Field allTimeFormats, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_allTimeFormats, put = setStaticF_allTimeFormats))::ArrayW<::StringW, ::Array<::StringW>*> allTimeFormats;

  /// @brief Method FromEnum, addr 0x2ece38c, size 0x288, virtual false, abstract: false, final false
  static inline ::StringW FromEnum(int64_t value, ::ArrayW<::StringW, ::Array<::StringW>*> values, ::ArrayW<int64_t, ::Array<int64_t>*> ids, ::StringW typeName);

  /// @brief Method FromXmlNCName, addr 0x2ece66c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW FromXmlNCName(::StringW ncName);

  /// @brief Method FromXmlName, addr 0x2ece614, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW FromXmlName(::StringW name);

  /// @brief Method FromXmlString, addr 0x2ece6c4, size 0xa78, virtual false, abstract: false, final false
  static inline ::System::Object* FromXmlString(::System::Xml::Serialization::TypeData* type, ::StringW value);

  /// @brief Method ToXmlString, addr 0x2ecd0a8, size 0xcc4, virtual false, abstract: false, final false
  static inline ::StringW ToXmlString(::System::Xml::Serialization::TypeData* type, ::System::Object* value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_allTimeFormats();

  static inline void setStaticF_allTimeFormats(::ArrayW<::StringW, ::Array<::StringW>*> value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlCustomFormatter, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlCustomFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlCustomFormatter*, "System.Xml.Serialization", "XmlCustomFormatter");
