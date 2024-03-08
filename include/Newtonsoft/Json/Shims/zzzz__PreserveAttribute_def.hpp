#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace Newtonsoft::Json::Shims {
class PreserveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Shims::PreserveAttribute);
// Type: Newtonsoft.Json.Shims::PreserveAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Shims {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Shims::PreserveAttribute*
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Shims::PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x27bcf20, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Shims::PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Shims
NEED_NO_BOX(::Newtonsoft::Json::Shims::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Shims::PreserveAttribute*, "Newtonsoft.Json.Shims", "PreserveAttribute");
