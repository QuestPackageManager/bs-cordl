#pragma once
// IWYU pragma private; include "System/Xml/Serialization/ListMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__ObjectMap_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Xml::Serialization::ListMap);
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

  /// @brief Method Equals, addr 0x4393570, size 0x164, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method FindElement, addr 0x4392f68, size 0x31c, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::StringW elementName, ::StringW ns);

  /// @brief Method FindElement, addr 0x438cd90, size 0x860, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* ob, int32_t index, ::System::Object* memberValue);

  /// @brief Method FindTextElement, addr 0x4393284, size 0x2ec, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement();

  /// @brief Method GetArrayType, addr 0x438cb88, size 0x208, virtual false, abstract: false, final false
  inline void GetArrayType(int32_t itemCount, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetHashCode, addr 0x43936d4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Xml::Serialization::ListMap* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__choiceMember() const;

  constexpr ::StringW& __cordl_internal_get__choiceMember();

  constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList* const& __cordl_internal_get__itemInfo() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList*& __cordl_internal_get__itemInfo();

  constexpr void __cordl_internal_set__choiceMember(::StringW value);

  constexpr void __cordl_internal_set__itemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);

  /// @brief Method .ctor, addr 0x43936dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ItemInfo, addr 0x4392f58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ItemInfo();

  /// @brief Method set_ChoiceMember, addr 0x4392f50, size 0x8, virtual false, abstract: false, final false
  inline void set_ChoiceMember(::StringW value);

  /// @brief Method set_ItemInfo, addr 0x4392f60, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7470 };

  /// @brief Field _itemInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapElementInfoList* ____itemInfo;

  /// @brief Field _choiceMember, offset: 0x18, size: 0x8, def value: None
  ::StringW ____choiceMember;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::ListMap, ____itemInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::ListMap, ____choiceMember) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::ListMap, 0x20>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::ListMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::ListMap*, "System.Xml.Serialization", "ListMap");
