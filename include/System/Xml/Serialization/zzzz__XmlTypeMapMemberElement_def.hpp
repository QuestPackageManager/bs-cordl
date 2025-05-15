#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberElement)
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlTypeMapElementInfoList;
}
namespace System::Xml::Serialization {
class XmlTypeMapElementInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberElement);
// Dependencies System.Xml.Serialization.XmlTypeMapMember
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeMapMemberElement
class CORDL_TYPE XmlTypeMapMemberElement : public ::System::Xml::Serialization::XmlTypeMapMember {
public:
  // Declarations
  __declspec(property(get = get_ChoiceMember, put = set_ChoiceMember)) ::StringW ChoiceMember;

  __declspec(property(get = get_ChoiceTypeData, put = set_ChoiceTypeData)) ::System::Xml::Serialization::TypeData* ChoiceTypeData;

  __declspec(property(get = get_ElementInfo, put = set_ElementInfo)) ::System::Xml::Serialization::XmlTypeMapElementInfoList* ElementInfo;

  __declspec(property(get = get_IsXmlTextCollector, put = set_IsXmlTextCollector)) bool IsXmlTextCollector;

  /// @brief Field _choiceMember, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceMember, put = __cordl_internal_set__choiceMember)) ::StringW _choiceMember;

  /// @brief Field _choiceTypeData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceTypeData, put = __cordl_internal_set__choiceTypeData)) ::System::Xml::Serialization::TypeData* _choiceTypeData;

  /// @brief Field _elementInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__elementInfo, put = __cordl_internal_set__elementInfo)) ::System::Xml::Serialization::XmlTypeMapElementInfoList* _elementInfo;

  /// @brief Field _isTextCollector, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__isTextCollector, put = __cordl_internal_set__isTextCollector)) bool _isTextCollector;

  /// @brief Method FindElement, addr 0x438ba2c, size 0x6fc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* ob, ::System::Object* memberValue);

  static inline ::System::Xml::Serialization::XmlTypeMapMemberElement* New_ctor();

  /// @brief Method SetChoice, addr 0x43903f0, size 0x10, virtual false, abstract: false, final false
  inline void SetChoice(::System::Object* ob, ::System::Object* choice);

  constexpr ::StringW const& __cordl_internal_get__choiceMember() const;

  constexpr ::StringW& __cordl_internal_get__choiceMember();

  constexpr ::System::Xml::Serialization::TypeData* const& __cordl_internal_get__choiceTypeData() const;

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get__choiceTypeData();

  constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList* const& __cordl_internal_get__elementInfo() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList*& __cordl_internal_get__elementInfo();

  constexpr bool const& __cordl_internal_get__isTextCollector() const;

  constexpr bool& __cordl_internal_get__isTextCollector();

  constexpr void __cordl_internal_set__choiceMember(::StringW value);

  constexpr void __cordl_internal_set__choiceTypeData(::System::Xml::Serialization::TypeData* value);

  constexpr void __cordl_internal_set__elementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);

  constexpr void __cordl_internal_set__isTextCollector(bool value);

  /// @brief Method .ctor, addr 0x43903c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ChoiceMember, addr 0x43903d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ChoiceMember();

  /// @brief Method get_ChoiceTypeData, addr 0x43903e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeData* get_ChoiceTypeData();

  /// @brief Method get_ElementInfo, addr 0x438a600, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ElementInfo();

  /// @brief Method get_IsXmlTextCollector, addr 0x4390400, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsXmlTextCollector();

  /// @brief Method set_ChoiceMember, addr 0x43903d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ChoiceMember(::StringW value);

  /// @brief Method set_ChoiceTypeData, addr 0x43903e8, size 0x8, virtual false, abstract: false, final false
  inline void set_ChoiceTypeData(::System::Xml::Serialization::TypeData* value);

  /// @brief Method set_ElementInfo, addr 0x43903c8, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);

  /// @brief Method set_IsXmlTextCollector, addr 0x4390408, size 0xc, virtual false, abstract: false, final false
  inline void set_IsXmlTextCollector(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberElement(XmlTypeMapMemberElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberElement(XmlTypeMapMemberElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7460 };

  /// @brief Field _elementInfo, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapElementInfoList* ____elementInfo;

  /// @brief Field _choiceMember, offset: 0x60, size: 0x8, def value: None
  ::StringW ____choiceMember;

  /// @brief Field _isTextCollector, offset: 0x68, size: 0x1, def value: None
  bool ____isTextCollector;

  /// @brief Field _choiceTypeData, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Serialization::TypeData* ____choiceTypeData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberElement, ____elementInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberElement, ____choiceMember) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberElement, ____isTextCollector) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberElement, ____choiceTypeData) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberElement, 0x78>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberElement*, "System.Xml.Serialization", "XmlTypeMapMemberElement");
