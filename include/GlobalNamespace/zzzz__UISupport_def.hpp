#pragma once
// IWYU pragma private; include "GlobalNamespace/UISupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UISupport)
// Forward declare root types
namespace GlobalNamespace {
class UISupport;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UISupport);
// Type: ::UISupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UISupport*
class CORDL_TYPE UISupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x30c2b74, size 0x74, virtual false, abstract: false, final false
  static inline void Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UISupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UISupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UISupport(UISupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UISupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UISupport(UISupport const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UISupport, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UISupport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UISupport*, "", "UISupport");
