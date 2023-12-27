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
namespace System::Runtime::Remoting::Lifetime {
class __Lease__RenewalDelegate;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Lifetime {
class ISponsor;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System::Collections {
class Queue;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3092))
// CS Name: ::Lease::RenewalDelegate*
class CORDL_TYPE __Lease__RenewalDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x249b2ec size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x249b644 size 0x14 virtual true final false
  inline ::System::TimeSpan Invoke(::System::Runtime::Remoting::Lifetime::ILease* lease);

  /// @brief Method BeginInvoke addr 0x249b418 size 0x20 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease* lease, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x249b61c size 0x28 virtual true final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3096)), TypeDefinitionIndex(TypeDefinitionIndex(2484)), TypeDefinitionIndex(TypeDefinitionIndex(2605)),
// TypeDefinitionIndex(TypeDefinitionIndex(2368))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3093)) CS Name: ::System.Runtime.Remoting.Lifetime::Lease*
class CORDL_TYPE Lease : public ::System::MarshalByRefObject {
public:
  // Declarations
  using RenewalDelegate = ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate;

  /// @brief Field _leaseExpireTime, offset 0x18, size 0x8
  __declspec(property(get = __get__leaseExpireTime, put = __set__leaseExpireTime))::System::DateTime _leaseExpireTime;

  /// @brief Field _currentState, offset 0x20, size 0x4
  __declspec(property(get = __get__currentState, put = __set__currentState))::System::Runtime::Remoting::Lifetime::LeaseState _currentState;

  /// @brief Field _initialLeaseTime, offset 0x28, size 0x8
  __declspec(property(get = __get__initialLeaseTime, put = __set__initialLeaseTime))::System::TimeSpan _initialLeaseTime;

  /// @brief Field _renewOnCallTime, offset 0x30, size 0x8
  __declspec(property(get = __get__renewOnCallTime, put = __set__renewOnCallTime))::System::TimeSpan _renewOnCallTime;

  /// @brief Field _sponsorshipTimeout, offset 0x38, size 0x8
  __declspec(property(get = __get__sponsorshipTimeout, put = __set__sponsorshipTimeout))::System::TimeSpan _sponsorshipTimeout;

  /// @brief Field _sponsors, offset 0x40, size 0x8
  __declspec(property(get = __get__sponsors, put = __set__sponsors))::System::Collections::ArrayList* _sponsors;

  /// @brief Field _renewingSponsors, offset 0x48, size 0x8
  __declspec(property(get = __get__renewingSponsors, put = __set__renewingSponsors))::System::Collections::Queue* _renewingSponsors;

  /// @brief Field _renewalDelegate, offset 0x50, size 0x8
  __declspec(property(get = __get__renewalDelegate, put = __set__renewalDelegate))::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* _renewalDelegate;

  __declspec(property(get = get_CurrentLeaseTime))::System::TimeSpan CurrentLeaseTime;

  __declspec(property(get = get_CurrentState))::System::Runtime::Remoting::Lifetime::LeaseState CurrentState;

  __declspec(property(get = get_RenewOnCallTime))::System::TimeSpan RenewOnCallTime;

  /// @brief Convert operator to "::System::Runtime::Remoting::Lifetime::ILease"
  constexpr operator ::System::Runtime::Remoting::Lifetime::ILease*() noexcept;

  constexpr ::System::DateTime& __get__leaseExpireTime();

  constexpr ::System::DateTime const& __get__leaseExpireTime() const;

  constexpr void __set__leaseExpireTime(::System::DateTime value);

  constexpr ::System::Runtime::Remoting::Lifetime::LeaseState& __get__currentState();

  constexpr ::System::Runtime::Remoting::Lifetime::LeaseState const& __get__currentState() const;

  constexpr void __set__currentState(::System::Runtime::Remoting::Lifetime::LeaseState value);

  constexpr ::System::TimeSpan& __get__initialLeaseTime();

  constexpr ::System::TimeSpan const& __get__initialLeaseTime() const;

  constexpr void __set__initialLeaseTime(::System::TimeSpan value);

  constexpr ::System::TimeSpan& __get__renewOnCallTime();

  constexpr ::System::TimeSpan const& __get__renewOnCallTime() const;

  constexpr void __set__renewOnCallTime(::System::TimeSpan value);

  constexpr ::System::TimeSpan& __get__sponsorshipTimeout();

  constexpr ::System::TimeSpan const& __get__sponsorshipTimeout() const;

  constexpr void __set__sponsorshipTimeout(::System::TimeSpan value);

  constexpr ::System::Collections::ArrayList*& __get__sponsors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__sponsors() const;

  constexpr void __set__sponsors(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::Queue*& __get__renewingSponsors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& __get__renewingSponsors() const;

  constexpr void __set__renewingSponsors(::System::Collections::Queue* value);

  constexpr ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*& __get__renewalDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*> const& __get__renewalDelegate() const;

  constexpr void __set__renewalDelegate(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* value);

  static inline ::System::Runtime::Remoting::Lifetime::Lease* New_ctor();

  /// @brief Method .ctor addr 0x249294c size 0x158 virtual false final false
  inline void _ctor();

  /// @brief Method get_CurrentLeaseTime addr 0x249acb4 size 0x68 virtual true final true
  inline ::System::TimeSpan get_CurrentLeaseTime();

  /// @brief Method get_CurrentState addr 0x249ad1c size 0x8 virtual true final true
  inline ::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();

  /// @brief Method Activate addr 0x249ad24 size 0xc virtual false final false
  inline void Activate();

  /// @brief Method get_RenewOnCallTime addr 0x249ad30 size 0x8 virtual true final true
  inline ::System::TimeSpan get_RenewOnCallTime();

  /// @brief Method Renew addr 0x249ad38 size 0x8c virtual true final true
  inline ::System::TimeSpan Renew(::System::TimeSpan renewalTime);

  /// @brief Method Unregister addr 0x249adc4 size 0x144 virtual true final true
  inline void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* obj);

  /// @brief Method UpdateState addr 0x249af08 size 0x1a0 virtual false final false
  inline void UpdateState();

  /// @brief Method CheckNextSponsor addr 0x249b0a8 size 0x244 virtual false final false
  inline void CheckNextSponsor();

  /// @brief Method ProcessSponsorResponse addr 0x249b438 size 0x1e4 virtual false final false
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

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::Lease);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::Lease*, "System.Runtime.Remoting.Lifetime", "Lease");
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*, "System.Runtime.Remoting.Lifetime", "Lease/RenewalDelegate");
