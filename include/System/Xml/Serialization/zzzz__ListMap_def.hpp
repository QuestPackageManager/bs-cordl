#pragma once
// IWYU pragma private; include "System/Xml/Serialization/ListMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__ObjectMap_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListMap)
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
class ListMap;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::ListMap*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::ListMap*, "System.Xml.Serialization", "ListMap");
// Dependencies System.Xml.Serialization.ObjectMap
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.ListMap
class CORDL_TYPE ListMap : public ::System::Xml::Serialization::ObjectMap {
public:
  // Declarations
  __declspec(property(put = set_ChoiceMember)) ::StringW ChoiceMember;

  __declspec(property(get = get_ItemInfo, put = set_ItemInfo)) ::System::Xml::Serialization::XmlTypeMapElementInfoList* ItemInfo;

  /// @brief Field _choiceMember, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__choiceMember, put = __cordl_internal_set__choiceMember)) ::StringW _choiceMember;

  /// @brief Field _itemInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__itemInfo, put = __cordl_internal_set__itemInfo)) ::System::Xml::Serialization::XmlTypeMapElementInfoList* _itemInfo;

  /// @brief Method Equals, addr 0x6310948, size 0x15c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method FindElement, addr 0x6310390, size 0x2f0, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::StringW elementName, ::StringW ns);

  /// @brief Method FindElement, addr 0x630a414, size 0x7c4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* ob, int32_t index, ::System::Object* memberValue);

  /// @brief Method FindTextElement, addr 0x6310680, size 0x2c8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement();

  /// @brief Method GetArrayType, addr 0x630a1ec, size 0x228, virtual false, abstract: false, final false
  inline void GetArrayType(int32_t itemCount, ::by_ref<::StringW> localName, ::by_ref<::StringW> ns);

  /// @brief Method GetHashCode, addr 0x6310aa4, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Serialization::ListMap* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__choiceMember() const;

  constexpr ::StringW& __cordl_internal_get__choiceMember();

  constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList* const& __cordl_internal_get__itemInfo() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList*& __cordl_internal_get__itemInfo();

  constexpr void __cordl_internal_set__choiceMember(::StringW value);

  constexpr void __cordl_internal_set__itemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);

  /// @brief Method .ctor, addr 0x6310ab8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ItemInfo, addr 0x6310380, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ItemInfo();

  /// @brief Method set_ChoiceMember, addr 0x6310378, size 0x8, virtual false, abstract: false, final false
  inline void set_ChoiceMember(::StringW value);

  /// @brief Method set_ItemInfo, addr 0x6310388, size 0x8, virtual false, abstract: false, final false
  inline void set_ItemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListMap(ListMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListMap(ListMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9531 };

  /// @brief Field _itemInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapElementInfoList* ____itemInfo;

  /// @brief Field _choiceMember, offset: 0x18, size: 0x8, def value: None
  ::StringW ____choiceMember;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::ListMap, ____itemInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ListMap, ____choiceMember) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Serialization::ListMap) == 0x20, "Size mismatch!");

} // namespace System::Xml::Serialization
