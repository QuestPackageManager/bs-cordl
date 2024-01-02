#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPollable)
// Forward declare root types
namespace GlobalNamespace {
class IPollable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPollable);
// Type: ::IPollable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12805))
// CS Name: ::IPollable*
class CORDL_TYPE IPollable {
public:
  // Declarations
  /// @brief Method PollUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PollUpdate();

  // Ctor Parameters [CppParam { name: "", ty: "IPollable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPollable(IPollable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPollable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPollable(IPollable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPollable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPollable*, "", "IPollable");
