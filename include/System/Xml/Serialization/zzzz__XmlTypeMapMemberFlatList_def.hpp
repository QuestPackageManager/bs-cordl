#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeMapMemberFlatList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_def.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberFlatList)
namespace System::Xml::Serialization {
class ListMap;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberFlatList;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlTypeMapMemberFlatList*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlTypeMapMemberFlatList*, "System.Xml.Serialization", "XmlTypeMapMemberFlatList");
// Dependencies System.Xml.Serialization.XmlTypeMapMemberExpandable
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeMapMemberFlatList
class CORDL_TYPE XmlTypeMapMemberFlatList : public ::System::Xml::Serialization::XmlTypeMapMemberExpandable {
public:
  // Declarations
  __declspec(property(get = get_ListMap, put = set_ListMap)) ::System::Xml::Serialization::ListMap* ListMap;

  /// @brief Field _listMap, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__listMap, put = __cordl_internal_set__listMap)) ::System::Xml::Serialization::ListMap* _listMap;

  static inline ::System::Xml::Serialization::XmlTypeMapMemberFlatList* New_ctor();

  constexpr ::System::Xml::Serialization::ListMap* const& __cordl_internal_get__listMap() const;

  constexpr ::System::Xml::Serialization::ListMap*& __cordl_internal_get__listMap();

  constexpr void __cordl_internal_set__listMap(::System::Xml::Serialization::ListMap* value);

  /// @brief Method .ctor, addr 0x6313138, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ListMap, addr 0x6313128, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::ListMap* get_ListMap();

  /// @brief Method set_ListMap, addr 0x6313130, size 0x8, virtual false, abstract: false, final false
  inline void set_ListMap(::System::Xml::Serialization::ListMap* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberFlatList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberFlatList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberFlatList(XmlTypeMapMemberFlatList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberFlatList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberFlatList(XmlTypeMapMemberFlatList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9553 };

  /// @brief Field _listMap, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Serialization::ListMap* ____listMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberFlatList, ____listMap) == 0x80, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::XmlTypeMapMemberFlatList) == 0x88, "Size mismatch!");

} // namespace System::Xml::Serialization
