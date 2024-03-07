#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace ModestTree::Util {
class PreserveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::Util::PreserveAttribute);
// Type: ModestTree.Util::PreserveAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::ModestTree.Util::PreserveAttribute*
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::ModestTree::Util::PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3026edc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreserveAttribute(PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreserveAttribute(PreserveAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace ModestTree::Util
NEED_NO_BOX(::ModestTree::Util::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::PreserveAttribute*, "ModestTree.Util", "PreserveAttribute");
