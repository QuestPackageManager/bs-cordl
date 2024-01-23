#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISponsor)
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class ISponsor;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::ISponsor);
// Type: System.Runtime.Remoting.Lifetime::ISponsor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3091))
// CS Name: ::System.Runtime.Remoting.Lifetime::ISponsor*
class CORDL_TYPE ISponsor {
public:
  // Declarations
  /// @brief Method Renewal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::TimeSpan Renewal(::System::Runtime::Remoting::Lifetime::ILease* lease);

  // Ctor Parameters [CppParam { name: "", ty: "ISponsor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISponsor(ISponsor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISponsor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISponsor(ISponsor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::ISponsor);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::ISponsor*, "System.Runtime.Remoting.Lifetime", "ISponsor");
