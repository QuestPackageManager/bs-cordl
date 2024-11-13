#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Lifetime/LeaseManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LeaseManager)
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Threading {
class Timer;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class LeaseManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Lifetime::LeaseManager);
// Type: System.Runtime.Remoting.Lifetime::LeaseManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Lifetime::LeaseManager*
class CORDL_TYPE LeaseManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _objects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objects, put = __cordl_internal_set__objects)) ::System::Collections::ArrayList* _objects;

  /// @brief Field _timer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__timer, put = __cordl_internal_set__timer)) ::System::Threading::Timer* _timer;

  /// @brief Method ManageLeases, addr 0x3c7b054, size 0x260, virtual false, abstract: false, final false
  inline void ManageLeases(::System::Object* state);

  static inline ::System::Runtime::Remoting::Lifetime::LeaseManager* New_ctor();

  /// @brief Method SetPollTime, addr 0x3c7acc0, size 0xf4, virtual false, abstract: false, final false
  inline void SetPollTime(::System::TimeSpan timeSpan);

  /// @brief Method StartManager, addr 0x3c7aee4, size 0x154, virtual false, abstract: false, final false
  inline void StartManager();

  /// @brief Method StopManager, addr 0x3c7b038, size 0x1c, virtual false, abstract: false, final false
  inline void StopManager();

  /// @brief Method TrackLifetime, addr 0x3c7adb4, size 0x130, virtual false, abstract: false, final false
  inline void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__objects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__objects() const;

  constexpr ::System::Threading::Timer*& __cordl_internal_get__timer();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& __cordl_internal_get__timer() const;

  constexpr void __cordl_internal_set__objects(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__timer(::System::Threading::Timer* value);

  /// @brief Method .ctor, addr 0x3c7b2b4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaseManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeaseManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaseManager(LeaseManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaseManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaseManager(LeaseManager const&) = delete;

  /// @brief Field _objects, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____objects;

  /// @brief Field _timer, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Timer* ____timer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3093 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LeaseManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::LeaseManager, ____objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::LeaseManager, ____timer) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LeaseManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseManager*, "System.Runtime.Remoting.Lifetime", "LeaseManager");
