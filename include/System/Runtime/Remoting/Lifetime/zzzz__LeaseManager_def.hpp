#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3094))
// CS Name: ::System.Runtime.Remoting.Lifetime::LeaseManager*
class CORDL_TYPE LeaseManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _objects, offset 0x10, size 0x8
  __declspec(property(get = __get__objects, put = __set__objects))::System::Collections::ArrayList* _objects;

  /// @brief Field _timer, offset 0x18, size 0x8
  __declspec(property(get = __get__timer, put = __set__timer))::System::Threading::Timer* _timer;

  constexpr ::System::Collections::ArrayList*& __get__objects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__objects() const;

  constexpr void __set__objects(::System::Collections::ArrayList* value);

  constexpr ::System::Threading::Timer*& __get__timer();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& __get__timer() const;

  constexpr void __set__timer(::System::Threading::Timer* value);

  /// @brief Method SetPollTime, addr 0x249b658, size 0xf8, virtual false, abstract: false, final false
  inline void SetPollTime(::System::TimeSpan timeSpan);

  /// @brief Method TrackLifetime, addr 0x249b750, size 0x134, virtual false, abstract: false, final false
  inline void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity);

  /// @brief Method StartManager, addr 0x249b884, size 0x160, virtual false, abstract: false, final false
  inline void StartManager();

  /// @brief Method StopManager, addr 0x249b9e4, size 0x1c, virtual false, abstract: false, final false
  inline void StopManager();

  /// @brief Method ManageLeases, addr 0x249ba00, size 0x264, virtual false, abstract: false, final false
  inline void ManageLeases(::System::Object* state);

  static inline ::System::Runtime::Remoting::Lifetime::LeaseManager* New_ctor();

  /// @brief Method .ctor, addr 0x249bc64, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LeaseManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaseManager(LeaseManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaseManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaseManager(LeaseManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaseManager();

public:
  /// @brief Field _objects, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____objects;

  /// @brief Field _timer, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Timer* ____timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LeaseManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::LeaseManager, ____objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Lifetime::LeaseManager, ____timer) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Lifetime
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LeaseManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseManager*, "System.Runtime.Remoting.Lifetime", "LeaseManager");
