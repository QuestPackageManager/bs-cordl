#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/LifetimeServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(LifetimeServices)
namespace System::Runtime::Remoting::Lifetime {
class LeaseManager;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class LifetimeServices;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::LifetimeServices);
// Dependencies System.Object, System.TimeSpan
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// CS Name: System.Runtime.Remoting.Lifetime.LifetimeServices
class CORDL_TYPE LifetimeServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field _leaseManager, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__leaseManager, put = setStaticF__leaseManager)) ::System::Runtime::Remoting::Lifetime::LeaseManager* _leaseManager;

  /// @brief Field _leaseManagerPollTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__leaseManagerPollTime, put = setStaticF__leaseManagerPollTime)) ::System::TimeSpan _leaseManagerPollTime;

  /// @brief Field _leaseTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__leaseTime, put = setStaticF__leaseTime)) ::System::TimeSpan _leaseTime;

  /// @brief Field _renewOnCallTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__renewOnCallTime, put = setStaticF__renewOnCallTime)) ::System::TimeSpan _renewOnCallTime;

  /// @brief Field _sponsorshipTimeout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__sponsorshipTimeout, put = setStaticF__sponsorshipTimeout)) ::System::TimeSpan _sponsorshipTimeout;

  /// @brief Method TrackLifetime, addr 0x3cd4b54, size 0x68, virtual false, abstract: false, final false
  static inline void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity);

  static inline ::System::Runtime::Remoting::Lifetime::LeaseManager* getStaticF__leaseManager();

  static inline ::System::TimeSpan getStaticF__leaseManagerPollTime();

  static inline ::System::TimeSpan getStaticF__leaseTime();

  static inline ::System::TimeSpan getStaticF__renewOnCallTime();

  static inline ::System::TimeSpan getStaticF__sponsorshipTimeout();

  /// @brief Method get_LeaseManagerPollTime, addr 0x3cdcdf8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_LeaseManagerPollTime();

  /// @brief Method get_LeaseTime, addr 0x3cdcec4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_LeaseTime();

  /// @brief Method get_RenewOnCallTime, addr 0x3cdcf78, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_RenewOnCallTime();

  /// @brief Method get_SponsorshipTimeout, addr 0x3cdd02c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_SponsorshipTimeout();

  static inline void setStaticF__leaseManager(::System::Runtime::Remoting::Lifetime::LeaseManager* value);

  static inline void setStaticF__leaseManagerPollTime(::System::TimeSpan value);

  static inline void setStaticF__leaseTime(::System::TimeSpan value);

  static inline void setStaticF__renewOnCallTime(::System::TimeSpan value);

  static inline void setStaticF__sponsorshipTimeout(::System::TimeSpan value);

  /// @brief Method set_LeaseManagerPollTime, addr 0x3cdce50, size 0x74, virtual false, abstract: false, final false
  static inline void set_LeaseManagerPollTime(::System::TimeSpan value);

  /// @brief Method set_LeaseTime, addr 0x3cdcf1c, size 0x5c, virtual false, abstract: false, final false
  static inline void set_LeaseTime(::System::TimeSpan value);

  /// @brief Method set_RenewOnCallTime, addr 0x3cdcfd0, size 0x5c, virtual false, abstract: false, final false
  static inline void set_RenewOnCallTime(::System::TimeSpan value);

  /// @brief Method set_SponsorshipTimeout, addr 0x3cdd084, size 0x5c, virtual false, abstract: false, final false
  static inline void set_SponsorshipTimeout(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LifetimeServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LifetimeServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LifetimeServices(LifetimeServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LifetimeServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LifetimeServices(LifetimeServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LifetimeServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LifetimeServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LifetimeServices*, "System.Runtime.Remoting.Lifetime", "LifetimeServices");
