#pragma once
// IWYU pragma private; include "System/Xml/HtmlTernaryTree.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HtmlTernaryTree)
// Forward declare root types
namespace System::Xml {
class HtmlTernaryTree;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::HtmlTernaryTree);
// Type: System.Xml::HtmlTernaryTree
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::HtmlTernaryTree*
class CORDL_TYPE HtmlTernaryTree : public ::System::Object {
public:
  // Declarations
  /// @brief Field htmlAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_htmlAttributes, put = setStaticF_htmlAttributes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> htmlAttributes;

  /// @brief Field htmlElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_htmlElements, put = setStaticF_htmlElements)) ::ArrayW<uint8_t, ::Array<uint8_t>*> htmlElements;

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_htmlAttributes();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_htmlElements();

  static inline void setStaticF_htmlAttributes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_htmlElements(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HtmlTernaryTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HtmlTernaryTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HtmlTernaryTree(HtmlTernaryTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HtmlTernaryTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HtmlTernaryTree(HtmlTernaryTree const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::HtmlTernaryTree, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::HtmlTernaryTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::HtmlTernaryTree*, "System.Xml", "HtmlTernaryTree");
