#pragma once
// IWYU pragma private; include "System/Xml/Ref.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Ref)
// Forward declare root types
namespace System::Xml {
class Ref;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ref);
// Type: System.Xml::Ref
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::Ref*
class CORDL_TYPE Ref : public ::System::Object {
public:
  // Declarations
  /// @brief Method Equal, addr 0x2e9ec04, size 0xc, virtual false, abstract: false, final false
  static inline bool Equal(::StringW strA, ::StringW strB);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ref();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ref", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ref(Ref&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ref", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ref(Ref const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ref, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Ref);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ref*, "System.Xml", "Ref");
