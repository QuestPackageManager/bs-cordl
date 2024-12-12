#pragma once
// IWYU pragma private; include "System/Xml/XmlCharacterData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlCharacterData)
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlCharacterData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlCharacterData);
// Dependencies System.Xml.XmlLinkedNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlCharacterData
class CORDL_TYPE XmlCharacterData : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) ::StringW Data;

  __declspec(property(get = get_InnerText, put = set_InnerText)) ::StringW InnerText;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  /// @brief Method CheckOnData, addr 0x4334060, size 0x38, virtual false, abstract: false, final false
  inline bool CheckOnData(::StringW data);

  static inline ::System::Xml::XmlCharacterData* New_ctor(::StringW data, ::System::Xml::XmlDocument* doc);

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::StringW value);

  /// @brief Method .ctor, addr 0x4333d68, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW data, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Data, addr 0x4333f6c, size 0x54, virtual true, abstract: false, final false
  inline ::StringW get_Data();

  /// @brief Method get_InnerText, addr 0x4333f54, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method get_Value, addr 0x4333f34, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Data, addr 0x4333fc0, size 0xa0, virtual true, abstract: false, final false
  inline void set_Data(::StringW value);

  /// @brief Method set_InnerText, addr 0x4333f60, size 0xc, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_Value, addr 0x4333f44, size 0x10, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlCharacterData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlCharacterData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlCharacterData(XmlCharacterData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlCharacterData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlCharacterData(XmlCharacterData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7285 };

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlCharacterData, ___data) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlCharacterData, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlCharacterData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCharacterData*, "System.Xml", "XmlCharacterData");
