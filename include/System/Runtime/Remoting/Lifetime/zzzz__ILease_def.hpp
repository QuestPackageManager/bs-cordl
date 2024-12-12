#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/ILease.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILease)
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::ILease);
// Dependencies
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// CS Name: System.Runtime.Remoting.Lifetime.ILease
class CORDL_TYPE ILease {
public:
  // Declarations
  __declspec(property(get = get_CurrentLeaseTime)) ::System::TimeSpan CurrentLeaseTime;

  __declspec(property(get = get_CurrentState)) ::System::Runtime::Remoting::Lifetime::LeaseState CurrentState;

  __declspec(property(get = get_RenewOnCallTime)) ::System::TimeSpan RenewOnCallTime;

  /// @brief Method Renew, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::TimeSpan Renew(::System::TimeSpan renewalTime);

  /// @brief Method get_CurrentLeaseTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::TimeSpan get_CurrentLeaseTime();

  /// @brief Method get_CurrentState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();

  /// @brief Method get_RenewOnCallTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::TimeSpan get_RenewOnCallTime();

  // Ctor Parameters [CppParam { name: "", ty: "ILease", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILease(ILease const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3089 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::ILease);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::ILease*, "System.Runtime.Remoting.Lifetime", "ILease");
