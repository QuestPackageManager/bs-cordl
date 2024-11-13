#pragma once
// IWYU pragma private; include "System/Xml/XmlChildNodes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlChildNodes)
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlChildNodes;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlChildNodes);
// Type: System.Xml::XmlChildNodes
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlChildNodes*
class CORDL_TYPE XmlChildNodes : public ::System::Xml::XmlNodeList {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::System::Xml::XmlNode* container;

  /// @brief Method GetEnumerator, addr 0x42d2fbc, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method Item, addr 0x42d2f14, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* Item(int32_t i);

  static inline ::System::Xml::XmlChildNodes* New_ctor(::System::Xml::XmlNode* container);

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set_container(::System::Xml::XmlNode* value);

  /// @brief Method .ctor, addr 0x42d2eec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* container);

  /// @brief Method get_Count, addr 0x42d2f70, size 0x4c, virtual true, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlChildNodes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlChildNodes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlChildNodes(XmlChildNodes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlChildNodes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlChildNodes(XmlChildNodes const&) = delete;

  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___container;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlChildNodes, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlChildNodes, ___container) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlChildNodes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlChildNodes*, "System.Xml", "XmlChildNodes");
