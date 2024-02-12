#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lease)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Queue;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System::Runtime::Remoting::Lifetime {
class ISponsor;
}
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
namespace System::Runtime::Remoting::Lifetime {
class __Lease__RenewalDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class Lease;
}
namespace System::Runtime::Remoting::Lifetime {
class __Lease__RenewalDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::Lease);
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate);
// Type: ::RenewalDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3092))
// CS Name: ::Lease::RenewalDelegate*
class CORDL_TYPE __Lease__RenewalDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x24bd360, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x24bd6b8, size 0x14, virtual true, abstract: false, final false
  inline ::System::TimeSpan Invoke(::System::Runtime::Remoting::Lifetime::ILease* lease);

  /// @brief Method BeginInvoke, addr 0x24bd48c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease* lease, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x24bd690, size 0x28, virtual true, abstract: false, final false
  inline ::System::TimeSpan EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__Lease__RenewalDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Lease__RenewalDelegate(__Lease__RenewalDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Lease__RenewalDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Lease__RenewalDelegate(__Lease__RenewalDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Lease__RenewalDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
// Type: System.Runtime.Remoting.Lifetime::Lease
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2484)), TypeDefinitionIndex(TypeDefinitionIndex(2605)),
// TypeDefinitionIndex(TypeDefinitionIndex(3096))] Self: TypeDefinitionIndex(TypeDefinitionIndex(3093)) CS Name: ::System.Runtime.Remoting.Lifetime::Lease*
class CORDL_TYPE Lease : public ::System::MarshalByRefObject {
public:
  // Declarations
  using RenewalDelegate = ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate;

  /// @brief Field _leaseExpireTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leaseExpireTime, put = __cordl_internal_set__leaseExpireTime))::System::DateTime _leaseExpireTime;

  /// @brief Field _currentState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__currentState, put = __cordl_internal_set__currentState))::System::Runtime::Remoting::Lifetime::LeaseState _currentState;

  /// @brief Field _initialLeaseTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__initialLeaseTime, put = __cordl_internal_set__initialLeaseTime))::System::TimeSpan _initialLeaseTime;

  /// @brief Field _renewOnCallTime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__renewOnCallTime, put = __cordl_internal_set__renewOnCallTime))::System::TimeSpan _renewOnCallTime;

  /// @brief Field _sponsorshipTimeout, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sponsorshipTimeout, put = __cordl_internal_set__sponsorshipTimeout))::System::TimeSpan _sponsorshipTimeout;

  /// @brief Field _sponsors, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sponsors, put = __cordl_internal_set__sponsors))::System::Collections::ArrayList* _sponsors;

  /// @brief Field _renewingSponsors, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__renewingSponsors, put = __cordl_internal_set__renewingSponsors))::System::Collections::Queue* _renewingSponsors;

  /// @brief Field _renewalDelegate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__renewalDelegate, put = __cordl_internal_set__renewalDelegate))::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* _renewalDelegate;

  __declspec(property(get = get_CurrentLeaseTime))::System::TimeSpan CurrentLeaseTime;

  __declspec(property(get = get_CurrentState))::System::Runtime::Remoting::Lifetime::LeaseState CurrentState;

  __declspec(property(get = get_RenewOnCallTime))::System::TimeSpan RenewOnCallTime;

  /// @brief Convert operator to "::System::Runtime::Remoting::Lifetime::ILease"
  constexpr operator ::System::Runtime::Remoting::Lifetime::ILease*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Lifetime::ILease"
  constexpr ::System::Runtime::Remoting::Lifetime::ILease* i___System__Runtime__Remoting__Lifetime__ILease() noexcept;

  constexpr ::System::DateTime& __cordl_internal_get__leaseExpireTime();

  constexpr ::System::DateTime const& __cordl_internal_get__leaseExpireTime() const;

  constexpr void __cordl_internal_set__leaseExpireTime(::System::DateTime value);

  constexpr ::System::Runtime::Remoting::Lifetime::LeaseState& __cordl_internal_get__currentState();

  constexpr ::System::Runtime::Remoting::Lifetime::LeaseState const& __cordl_internal_get__currentState() const;

  constexpr void __cordl_internal_set__currentState(::System::Runtime::Remoting::Lifetime::LeaseState value);

  constexpr ::System::TimeSpan& __cordl_internal_get__initialLeaseTime();

  constexpr ::System::TimeSpan const& __cordl_internal_get__initialLeaseTime() const;

  constexpr void __cordl_internal_set__initialLeaseTime(::System::TimeSpan value);

  constexpr ::System::TimeSpan& __cordl_internal_get__renewOnCallTime();

  constexpr ::System::TimeSpan const& __cordl_internal_get__renewOnCallTime() const;

  constexpr void __cordl_internal_set__renewOnCallTime(::System::TimeSpan value);

  constexpr ::System::TimeSpan& __cordl_internal_get__sponsorshipTimeout();

  constexpr ::System::TimeSpan const& __cordl_internal_get__sponsorshipTimeout() const;

  constexpr void __cordl_internal_set__sponsorshipTimeout(::System::TimeSpan value);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__sponsors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__sponsors() const;

  constexpr void __cordl_internal_set__sponsors(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::Queue*& __cordl_internal_get__renewingSponsors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& __cordl_internal_get__renewingSponsors() const;

  constexpr void __cordl_internal_set__renewingSponsors(::System::Collections::Queue* value);

  constexpr ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*& __cordl_internal_get__renewalDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*> const& __cordl_internal_get__renewalDelegate() const;

  constexpr void __cordl_internal_set__renewalDelegate(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* value);

  static inline ::System::Runtime::Remoting::Lifetime::Lease* New_ctor();

  /// @brief Method .ctor, addr 0x24b49c0, size 0x158, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CurrentLeaseTime, addr 0x24bcd28, size 0x68, virtual true, abstract: false, final true
  inline ::System::TimeSpan get_CurrentLeaseTime();

  /// @brief Method get_CurrentState, addr 0x24bcd90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();

  /// @brief Method Activate, addr 0x24bcd98, size 0xc, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method get_RenewOnCallTime, addr 0x24bcda4, size 0x8, virtual true, abstract: false, final true
  inline ::System::TimeSpan get_RenewOnCallTime();

  /// @brief Method Renew, addr 0x24bcdac, size 0x8c, virtual true, abstract: false, final true
  inline ::System::TimeSpan Renew(::System::TimeSpan renewalTime);

  /// @brief Method Unregister, addr 0x24bce38, size 0x144, virtual true, abstract: false, final true
  inline void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* obj);

  /// @brief Method UpdateState, addr 0x24bcf7c, size 0x1a0, virtual false, abstract: false, final false
  inline void UpdateState();

  /// @brief Method CheckNextSponsor, addr 0x24bd11c, size 0x244, virtual false, abstract: false, final false
  inline void CheckNextSponsor();

  /// @brief Method ProcessSponsorResponse, addr 0x24bd4ac, size 0x1e4, virtual false, abstract: false, final false
  inline void ProcessSponsorResponse(::System::Object* state, bool timedOut);

  // Ctor Parameters [CppParam { name: "", ty: "Lease", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lease(Lease&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lease", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lease(Lease const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lease();

public:
  /// @brief Field _leaseExpireTime, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____leaseExpireTime;

  /// @brief Field _currentState, offset: 0x20, size: 0x4, def value: None
  ::System::Runtime::Remoting::Lifetime::LeaseState ____currentState;

  /// @brief Field _initialLeaseTime, offset: 0x28, size: 0x8, def value: None
  ::System::TimeSpan ____initialLeaseTime;

  /// @brief Field _renewOnCallTime, offset: 0x30, size: 0x8, def value: None
  ::System::TimeSpan ____renewOnCallTime;

  /// @brief Field _sponsorshipTimeout, offset: 0x38, size: 0x8, def value: None
  ::System::TimeSpan ____sponsorshipTimeout;

  /// @brief Field _sponsors, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____sponsors;

  /// @brief Field _renewingSponsors, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Queue* ____renewingSponsors;

  /// @brief Field _renewalDelegate, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* ____renewalDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::Lease, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____leaseExpireTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____currentState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____initialLeaseTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____renewOnCallTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____sponsorshipTimeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____sponsors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____renewingSponsors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::Lease, ____renewalDelegate) == 0x50, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::Lease);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::Lease*, "System.Runtime.Remoting.Lifetime", "Lease");
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*, "System.Runtime.Remoting.Lifetime", "Lease/RenewalDelegate");
