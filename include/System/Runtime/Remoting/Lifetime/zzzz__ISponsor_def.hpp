#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/ISponsor.hpp"
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
// Dependencies
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// CS Name: System.Runtime.Remoting.Lifetime.ISponsor
class CORDL_TYPE ISponsor {
public:
  // Declarations
  /// @brief Method Renewal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::TimeSpan Renewal(::System::Runtime::Remoting::Lifetime::ILease* lease);

  // Ctor Parameters [CppParam { name: "", ty: "ISponsor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISponsor(ISponsor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3107 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::ISponsor);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::ISponsor*, "System.Runtime.Remoting.Lifetime", "ISponsor");
