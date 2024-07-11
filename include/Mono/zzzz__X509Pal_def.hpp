#pragma once
// IWYU pragma private; include "Mono/X509Pal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Pal)
namespace Mono {
class X509PalImpl;
}
// Forward declare root types
namespace Mono {
class X509Pal;
}
// Write type traits
MARK_REF_PTR_T(::Mono::X509Pal);
// Type: Mono::X509Pal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// CS Name: ::Mono::X509Pal*
class CORDL_TYPE X509Pal : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_Instance, addr 0x2c915e8, size 0x60, virtual false, abstract: false, final false
  static inline ::Mono::X509PalImpl* get_Instance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Pal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Pal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Pal(X509Pal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Pal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Pal(X509Pal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::X509Pal, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::X509Pal);
DEFINE_IL2CPP_ARG_TYPE(::Mono::X509Pal*, "Mono", "X509Pal");
