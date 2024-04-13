#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Logging)
// Forward declare root types
namespace System::Net {
class Logging;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Logging);
// Type: System.Net::Logging
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::Logging*
class CORDL_TYPE Logging : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_On, addr 0x2eef094, size 0x8, virtual false, abstract: false, final false
  static inline bool get_On();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logging();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logging(Logging&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logging", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logging(Logging const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Logging, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Logging);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Logging*, "System.Net", "Logging");
