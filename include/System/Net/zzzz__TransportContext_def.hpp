#pragma once
// IWYU pragma private; include "System/Net/TransportContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransportContext)
// Forward declare root types
namespace System::Net {
class TransportContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::TransportContext);
// Type: System.Net::TransportContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::TransportContext*
class CORDL_TYPE TransportContext : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransportContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransportContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransportContext(TransportContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransportContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransportContext(TransportContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::TransportContext, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::TransportContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TransportContext*, "System.Net", "TransportContext");
