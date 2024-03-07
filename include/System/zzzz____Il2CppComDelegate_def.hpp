#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz____Il2CppComObject_def.hpp"
CORDL_MODULE_EXPORT(__Il2CppComDelegate)
// Forward declare root types
namespace System {
class __Il2CppComDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::__Il2CppComDelegate);
// Type: System::__Il2CppComDelegate
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::__Il2CppComDelegate*
class CORDL_TYPE __Il2CppComDelegate : public ::System::__Il2CppComObject {
public:
  // Declarations
  /// @brief Method Finalize, addr 0x3090944, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Finalize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Il2CppComDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Il2CppComDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Il2CppComDelegate(__Il2CppComDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Il2CppComDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Il2CppComDelegate(__Il2CppComDelegate const&) = delete;

  /// @brief Size padding 0xb0 - 0x10 = 0xa0, packed as 0xa0
  uint8_t _cordl_size_padding[0xa0];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Il2CppComDelegate, 0xb0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::__Il2CppComDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::__Il2CppComDelegate*, "System", "__Il2CppComDelegate");
