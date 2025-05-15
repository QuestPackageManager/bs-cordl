#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting)
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
struct ChangeUsageMsg_InputRemoting_Data;
}
namespace UnityEngine::InputSystem {
class ChangeUsageMsg_InputRemoting___c;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ConnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_DisconnectMsg;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_Flags;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_MessageType;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_Message;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_RemoteInputDevice;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_RemoteSender;
}
namespace UnityEngine::InputSystem {
class InputRemoting_RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_Subscriber;
}
namespace UnityEngine::InputSystem {
struct NewDeviceMsg_InputRemoting_Data;
}
namespace UnityEngine::InputSystem {
class NewDeviceMsg_InputRemoting___c;
}
namespace UnityEngine::InputSystem {
struct NewLayoutMsg_InputRemoting_Data;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputRemoting_Flags;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_MessageType;
}
namespace UnityEngine::InputSystem {
class ChangeUsageMsg_InputRemoting___c;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ConnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_DisconnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_Subscriber;
}
namespace UnityEngine::InputSystem {
class NewDeviceMsg_InputRemoting___c;
}
namespace UnityEngine::InputSystem {
struct ChangeUsageMsg_InputRemoting_Data;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_Message;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_RemoteInputDevice;
}
namespace UnityEngine::InputSystem {
struct InputRemoting_RemoteSender;
}
namespace UnityEngine::InputSystem {
struct NewDeviceMsg_InputRemoting_Data;
}
namespace UnityEngine::InputSystem {
struct NewLayoutMsg_InputRemoting_Data;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputRemoting_Flags);
MARK_VAL_T(::UnityEngine::InputSystem::InputRemoting_MessageType);
MARK_REF_PTR_T(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_ConnectMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_DisconnectMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_NewEventsMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_StartSendingMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_StopSendingMsg);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputRemoting_Subscriber);
MARK_REF_PTR_T(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c);
MARK_VAL_T(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data);
MARK_VAL_T(::UnityEngine::InputSystem::InputRemoting_Message);
MARK_VAL_T(::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice);
MARK_VAL_T(::UnityEngine::InputSystem::InputRemoting_RemoteSender);
MARK_VAL_T(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data);
MARK_VAL_T(::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/MessageType
struct CORDL_TYPE InputRemoting_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputRemoting_MessageType_Unwrapped
  enum struct __InputRemoting_MessageType_Unwrapped : int32_t {
    __E_Connect = static_cast<int32_t>(0x0),
    __E_Disconnect = static_cast<int32_t>(0x1),
    __E_NewLayout = static_cast<int32_t>(0x2),
    __E_NewDevice = static_cast<int32_t>(0x3),
    __E_NewEvents = static_cast<int32_t>(0x4),
    __E_RemoveDevice = static_cast<int32_t>(0x5),
    __E_RemoveLayout = static_cast<int32_t>(0x6),
    __E_ChangeUsages = static_cast<int32_t>(0x7),
    __E_StartSending = static_cast<int32_t>(0x8),
    __E_StopSending = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputRemoting_MessageType_Unwrapped() const noexcept {
    return static_cast<__InputRemoting_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputRemoting_MessageType(int32_t value__) noexcept;

  /// @brief Field ChangeUsages value: I32(7)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const ChangeUsages;

  /// @brief Field Connect value: I32(0)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const Connect;

  /// @brief Field Disconnect value: I32(1)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const Disconnect;

  /// @brief Field NewDevice value: I32(3)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const NewDevice;

  /// @brief Field NewEvents value: I32(4)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const NewEvents;

  /// @brief Field NewLayout value: I32(2)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const NewLayout;

  /// @brief Field RemoveDevice value: I32(5)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const RemoveDevice;

  /// @brief Field RemoveLayout value: I32(6)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const RemoveLayout;

  /// @brief Field StartSending value: I32(8)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const StartSending;

  /// @brief Field StopSending value: I32(9)
  static ::UnityEngine::InputSystem::InputRemoting_MessageType const StopSending;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_MessageType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputRemoting::MessageType
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/Message
struct CORDL_TYPE InputRemoting_Message {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_Message();

  // Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::InputSystem::InputRemoting_MessageType",
  // modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr InputRemoting_Message(int32_t participantId, ::UnityEngine::InputSystem::InputRemoting_MessageType type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6660 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field participantId, offset: 0x0, size: 0x4, def value: None
  int32_t participantId;

  /// @brief Field type, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputRemoting_MessageType type;

  /// @brief Field data, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Message, participantId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Message, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Message, data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_Message, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/Flags
struct CORDL_TYPE InputRemoting_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputRemoting_Flags_Unwrapped
  enum struct __InputRemoting_Flags_Unwrapped : int32_t {
    __E_Sending = static_cast<int32_t>(0x1),
    __E_StartSendingOnConnect = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputRemoting_Flags_Unwrapped() const noexcept {
    return static_cast<__InputRemoting_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputRemoting_Flags(int32_t value__) noexcept;

  /// @brief Field Sending value: I32(1)
  static ::UnityEngine::InputSystem::InputRemoting_Flags const Sending;

  /// @brief Field StartSendingOnConnect value: I32(2)
  static ::UnityEngine::InputSystem::InputRemoting_Flags const StartSendingOnConnect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6661 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/RemoteSender
struct CORDL_TYPE InputRemoting_RemoteSender {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_RemoteSender();

  // Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "layouts", ty:
  // "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString,::Array<::UnityEngine::InputSystem::Utilities::InternedString>*>", modifiers: "", def_value: None }, CppParam { name: "devices",
  // ty: "::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice,::Array<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice>*>", modifiers: "", def_value: None }]
  constexpr InputRemoting_RemoteSender(int32_t senderId, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> layouts,
                                       ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice>*> devices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field senderId, offset: 0x0, size: 0x4, def value: None
  int32_t senderId;

  /// @brief Field layouts, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> layouts;

  /// @brief Field devices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice>*> devices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_RemoteSender, senderId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_RemoteSender, layouts) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_RemoteSender, devices) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_RemoteSender, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/RemoteInputDevice
struct CORDL_TYPE InputRemoting_RemoteInputDevice {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_RemoteInputDevice();

  // Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
  constexpr InputRemoting_RemoteInputDevice(int32_t remoteId, int32_t localId, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6663 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field remoteId, offset: 0x0, size: 0x4, def value: None
  int32_t remoteId;

  /// @brief Field localId, offset: 0x4, size: 0x4, def value: None
  int32_t localId;

  /// @brief Field description, offset: 0x8, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, remoteId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, localId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, description) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.IDisposable, System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/Subscriber
class CORDL_TYPE InputRemoting_Subscriber : public ::System::Object {
public:
  // Declarations
  /// @brief Field observer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_observer, put = __cordl_internal_set_observer)) ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* observer;

  /// @brief Field owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner)) ::UnityEngine::InputSystem::InputRemoting* owner;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x45c5ab8, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::InputRemoting_Subscriber* New_ctor();

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* const& __cordl_internal_get_observer() const;

  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*& __cordl_internal_get_observer();

  constexpr ::UnityEngine::InputSystem::InputRemoting* const& __cordl_internal_get_owner() const;

  constexpr ::UnityEngine::InputSystem::InputRemoting*& __cordl_internal_get_owner();

  constexpr void __cordl_internal_set_observer(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* value);

  constexpr void __cordl_internal_set_owner(::UnityEngine::InputSystem::InputRemoting* value);

  /// @brief Method .ctor, addr 0x45c430c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_Subscriber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_Subscriber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_Subscriber(InputRemoting_Subscriber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_Subscriber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_Subscriber(InputRemoting_Subscriber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6664 };

  /// @brief Field owner, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputRemoting* ___owner;

  /// @brief Field observer, offset: 0x18, size: 0x8, def value: None
  ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* ___observer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Subscriber, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Subscriber, ___observer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_Subscriber, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/ConnectMsg
class CORDL_TYPE InputRemoting_ConnectMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x45c3700, size 0x44, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_ConnectMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ConnectMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_ConnectMsg(InputRemoting_ConnectMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ConnectMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_ConnectMsg(InputRemoting_ConnectMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6665 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_ConnectMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/StartSendingMsg
class CORDL_TYPE InputRemoting_StartSendingMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x45c420c, size 0x10, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_StartSendingMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StartSendingMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_StartSendingMsg(InputRemoting_StartSendingMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StartSendingMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_StartSendingMsg(InputRemoting_StartSendingMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6666 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_StartSendingMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/StopSendingMsg
class CORDL_TYPE InputRemoting_StopSendingMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x45c421c, size 0x10, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_StopSendingMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StopSendingMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_StopSendingMsg(InputRemoting_StopSendingMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StopSendingMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_StopSendingMsg(InputRemoting_StopSendingMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_StopSendingMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/DisconnectMsg
class CORDL_TYPE InputRemoting_DisconnectMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Process, addr 0x45c3744, size 0x94, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_DisconnectMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_DisconnectMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_DisconnectMsg(InputRemoting_DisconnectMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_DisconnectMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_DisconnectMsg(InputRemoting_DisconnectMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_DisconnectMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/NewLayoutMsg/Data
struct CORDL_TYPE NewLayoutMsg_InputRemoting_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewLayoutMsg_InputRemoting_Data();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "isOverride", ty: "bool", modifiers: "", def_value: None }]
  constexpr NewLayoutMsg_InputRemoting_Data(::StringW name, ::StringW layoutJson, bool isOverride) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field layoutJson, offset: 0x8, size: 0x8, def value: None
  ::StringW layoutJson;

  /// @brief Field isOverride, offset: 0x10, size: 0x1, def value: None
  bool isOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data, layoutJson) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data, isOverride) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewLayoutMsg
class CORDL_TYPE InputRemoting_NewLayoutMsg : public ::System::Object {
public:
  // Declarations
  using Data = ::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data;

  /// @brief Method Create, addr 0x45c4680, size 0x244, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting_Message> Create(::UnityEngine::InputSystem::InputRemoting* sender, ::StringW layoutName);

  /// @brief Method Process, addr 0x45c37d8, size 0xf8, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_NewLayoutMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewLayoutMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_NewLayoutMsg(InputRemoting_NewLayoutMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewLayoutMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_NewLayoutMsg(InputRemoting_NewLayoutMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.Layouts.InputDeviceDescription
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg/Data
struct CORDL_TYPE NewDeviceMsg_InputRemoting_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewDeviceMsg_InputRemoting_Data();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name:
  // "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }]
  constexpr NewDeviceMsg_InputRemoting_Data(::StringW name, ::StringW layout, int32_t deviceId, ::ArrayW<::StringW, ::Array<::StringW>*> usages,
                                            ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field layout, offset: 0x8, size: 0x8, def value: None
  ::StringW layout;

  /// @brief Field deviceId, offset: 0x10, size: 0x4, def value: None
  int32_t deviceId;

  /// @brief Field usages, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> usages;

  /// @brief Field description, offset: 0x20, size: 0x38, def value: None
  ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, layout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, deviceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, usages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, description) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, 0x58>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg/<>c
class CORDL_TYPE NewDeviceMsg_InputRemoting___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__1_0;

  static inline ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* New_ctor();

  /// @brief Method <Create>b__1_0, addr 0x45c62bc, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method .ctor, addr 0x45c62b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewDeviceMsg_InputRemoting___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewDeviceMsg_InputRemoting___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewDeviceMsg_InputRemoting___c(NewDeviceMsg_InputRemoting___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewDeviceMsg_InputRemoting___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewDeviceMsg_InputRemoting___c(NewDeviceMsg_InputRemoting___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg
class CORDL_TYPE InputRemoting_NewDeviceMsg : public ::System::Object {
public:
  // Declarations
  using Data = ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data;

  using __c = ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c;

  /// @brief Method Create, addr 0x45c4ab4, size 0x1f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x45c38d0, size 0x50c, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_NewDeviceMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewDeviceMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_NewDeviceMsg(InputRemoting_NewDeviceMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewDeviceMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_NewDeviceMsg(InputRemoting_NewDeviceMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewEventsMsg
class CORDL_TYPE InputRemoting_NewEventsMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x45c4e08, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting_Message Create(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> events, int32_t eventCount);

  /// @brief Method CreateResetEvent, addr 0x45c5160, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting_Message CreateResetEvent(::UnityEngine::InputSystem::InputDevice* device, bool isHardReset);

  /// @brief Method CreateStateEvent, addr 0x45c4ca4, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting_Message CreateStateEvent(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x45c3ddc, size 0xbc, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_NewEventsMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewEventsMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_NewEventsMsg(InputRemoting_NewEventsMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewEventsMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_NewEventsMsg(InputRemoting_NewEventsMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_NewEventsMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/Data
struct CORDL_TYPE ChangeUsageMsg_InputRemoting_Data {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeUsageMsg_InputRemoting_Data();

  // Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value:
  // None }]
  constexpr ChangeUsageMsg_InputRemoting_Data(int32_t deviceId, ::ArrayW<::StringW, ::Array<::StringW>*> usages) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6675 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field deviceId, offset: 0x0, size: 0x4, def value: None
  int32_t deviceId;

  /// @brief Field usages, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> usages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data, deviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data, usages) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/<>c
class CORDL_TYPE ChangeUsageMsg_InputRemoting___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* __9__1_0;

  static inline ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* New_ctor();

  /// @brief Method <Create>b__1_0, addr 0x45c6474, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x);

  /// @brief Method .ctor, addr 0x45c646c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* getStaticF___9__1_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChangeUsageMsg_InputRemoting___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChangeUsageMsg_InputRemoting___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChangeUsageMsg_InputRemoting___c(ChangeUsageMsg_InputRemoting___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChangeUsageMsg_InputRemoting___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChangeUsageMsg_InputRemoting___c(ChangeUsageMsg_InputRemoting___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg
class CORDL_TYPE InputRemoting_ChangeUsageMsg : public ::System::Object {
public:
  // Declarations
  using Data = ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data;

  using __c = ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c;

  /// @brief Method Create, addr 0x45c4fc0, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x45c3e98, size 0x308, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_ChangeUsageMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ChangeUsageMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_ChangeUsageMsg(InputRemoting_ChangeUsageMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ChangeUsageMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_ChangeUsageMsg(InputRemoting_ChangeUsageMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/RemoveDeviceMsg
class CORDL_TYPE InputRemoting_RemoveDeviceMsg : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x45c4f98, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Process, addr 0x45c41a0, size 0x6c, virtual false, abstract: false, final false
  static inline void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting_Message msg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting_RemoveDeviceMsg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_RemoveDeviceMsg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting_RemoveDeviceMsg(InputRemoting_RemoveDeviceMsg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting_RemoveDeviceMsg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting_RemoveDeviceMsg(InputRemoting_RemoveDeviceMsg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.IObservable`1<T>, System.IObserver`1<T>, System.Object, UnityEngine.InputSystem.InputRemoting::Flags, UnityEngine.InputSystem.InputRemoting::Message
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting
class CORDL_TYPE InputRemoting : public ::System::Object {
public:
  // Declarations
  using ChangeUsageMsg = ::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg;

  using ConnectMsg = ::UnityEngine::InputSystem::InputRemoting_ConnectMsg;

  using DisconnectMsg = ::UnityEngine::InputSystem::InputRemoting_DisconnectMsg;

  using Flags = ::UnityEngine::InputSystem::InputRemoting_Flags;

  using Message = ::UnityEngine::InputSystem::InputRemoting_Message;

  using MessageType = ::UnityEngine::InputSystem::InputRemoting_MessageType;

  using NewDeviceMsg = ::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg;

  using NewEventsMsg = ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg;

  using NewLayoutMsg = ::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg;

  using RemoteInputDevice = ::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice;

  using RemoteSender = ::UnityEngine::InputSystem::InputRemoting_RemoteSender;

  using RemoveDeviceMsg = ::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg;

  using StartSendingMsg = ::UnityEngine::InputSystem::InputRemoting_StartSendingMsg;

  using StopSendingMsg = ::UnityEngine::InputSystem::InputRemoting_StopSendingMsg;

  using Subscriber = ::UnityEngine::InputSystem::InputRemoting_Subscriber;

  /// @brief Field m_Flags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::InputRemoting_Flags m_Flags;

  /// @brief Field m_LocalManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LocalManager, put = __cordl_internal_set_m_LocalManager)) ::UnityEngine::InputSystem::InputManager* m_LocalManager;

  /// @brief Field m_Senders, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Senders,
                      put = __cordl_internal_set_m_Senders)) ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*>
      m_Senders;

  /// @brief Field m_Subscribers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Subscribers,
                      put = __cordl_internal_set_m_Subscribers)) ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*>
      m_Subscribers;

  __declspec(property(get = get_manager)) ::UnityEngine::InputSystem::InputManager* manager;

  __declspec(property(get = get_sending, put = set_sending)) bool sending;

  /// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>"
  constexpr operator ::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>*() noexcept;

  /// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>"
  constexpr operator ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>*() noexcept;

  /// @brief Method BuildLayoutNamespace, addr 0x45c5380, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::InternedString BuildLayoutNamespace(int32_t senderId);

  /// @brief Method DeserializeData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TData> static inline TData DeserializeData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method FindLocalDeviceId, addr 0x45c5420, size 0x74, virtual false, abstract: false, final false
  inline int32_t FindLocalDeviceId(int32_t remoteDeviceId, int32_t senderIndex);

  /// @brief Method FindOrCreateSenderRecord, addr 0x45c52dc, size 0xa4, virtual false, abstract: false, final false
  inline int32_t FindOrCreateSenderRecord(int32_t senderId);

  static inline ::UnityEngine::InputSystem::InputRemoting* New_ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect);

  /// @brief Method RemoveRemoteDevices, addr 0x45c553c, size 0xfc, virtual false, abstract: false, final false
  inline void RemoveRemoteDevices(int32_t participantId);

  /// @brief Method Send, addr 0x45c48c4, size 0x104, virtual false, abstract: false, final false
  inline void Send(::UnityEngine::InputSystem::InputRemoting_Message msg);

  /// @brief Method SendAllDevices, addr 0x45c4468, size 0x164, virtual false, abstract: false, final false
  inline void SendAllDevices();

  /// @brief Method SendAllGeneratedLayouts, addr 0x45c4314, size 0x154, virtual false, abstract: false, final false
  inline void SendAllGeneratedLayouts();

  /// @brief Method SendDevice, addr 0x45c4a30, size 0x84, virtual false, abstract: false, final false
  inline void SendDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SendDeviceChange, addr 0x45c4edc, size 0xbc, virtual false, abstract: false, final false
  inline void SendDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method SendEvent, addr 0x45c4da4, size 0x64, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method SendInitialMessages, addr 0x45c3410, size 0x18, virtual false, abstract: false, final false
  inline void SendInitialMessages();

  /// @brief Method SendLayout, addr 0x45c45cc, size 0xb4, virtual false, abstract: false, final false
  inline void SendLayout(::StringW layoutName);

  /// @brief Method SendLayoutChange, addr 0x45c51d8, size 0x104, virtual false, abstract: false, final false
  inline void SendLayoutChange(::StringW layout, ::UnityEngine::InputSystem::InputControlLayoutChange change);

  /// @brief Method SerializeData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TData> static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeData(TData data);

  /// @brief Method StartSending, addr 0x45c31a4, size 0x164, virtual false, abstract: false, final false
  inline void StartSending();

  /// @brief Method StopSending, addr 0x45c3428, size 0x14c, virtual false, abstract: false, final false
  inline void StopSending();

  /// @brief Method Subscribe, addr 0x45c4234, size 0xd8, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* observer);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted, addr 0x45c4230, size 0x4, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted();

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError, addr 0x45c422c, size 0x4, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception* error);

  /// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext, addr 0x45c367c, size 0x84, virtual true, abstract: false, final true
  inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::InputRemoting_Message msg);

  /// @brief Method TryGetDeviceByRemoteId, addr 0x45c5494, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceByRemoteId(int32_t remoteDeviceId, int32_t senderIndex);

  constexpr ::UnityEngine::InputSystem::InputRemoting_Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::InputRemoting_Flags& __cordl_internal_get_m_Flags();

  constexpr ::UnityEngine::InputSystem::InputManager* const& __cordl_internal_get_m_LocalManager() const;

  constexpr ::UnityEngine::InputSystem::InputManager*& __cordl_internal_get_m_LocalManager();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*> const& __cordl_internal_get_m_Senders() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*>& __cordl_internal_get_m_Senders();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*> const& __cordl_internal_get_m_Subscribers() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*>& __cordl_internal_get_m_Subscribers();

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::InputRemoting_Flags value);

  constexpr void __cordl_internal_set_m_LocalManager(::UnityEngine::InputSystem::InputManager* value);

  constexpr void __cordl_internal_set_m_Senders(::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*> value);

  constexpr void __cordl_internal_set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*> value);

  /// @brief Method .ctor, addr 0x45c311c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputManager* manager, bool startSendingOnConnect);

  /// @brief Method get_manager, addr 0x45c5534, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputManager* get_manager();

  /// @brief Method get_sending, addr 0x45c3100, size 0xc, virtual false, abstract: false, final false
  inline bool get_sending();

  /// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>"
  constexpr ::System::IObservable_1<::UnityEngine::InputSystem::InputRemoting_Message>* i___System__IObservable_1___UnityEngine__InputSystem__InputRemoting_Message_() noexcept;

  /// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>"
  constexpr ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting_Message>* i___System__IObserver_1___UnityEngine__InputSystem__InputRemoting_Message_() noexcept;

  /// @brief Method set_sending, addr 0x45c310c, size 0x10, virtual false, abstract: false, final false
  inline void set_sending(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputRemoting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputRemoting(InputRemoting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputRemoting(InputRemoting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6679 };

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputRemoting_Flags ___m_Flags;

  /// @brief Field m_LocalManager, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputManager* ___m_LocalManager;

  /// @brief Field m_Subscribers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*, ::Array<::UnityEngine::InputSystem::InputRemoting_Subscriber*>*> ___m_Subscribers;

  /// @brief Field m_Senders, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputRemoting_RemoteSender, ::Array<::UnityEngine::InputSystem::InputRemoting_RemoteSender>*> ___m_Senders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_LocalManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Subscribers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Senders) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputRemoting, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_Flags, "UnityEngine.InputSystem", "InputRemoting/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_MessageType, "UnityEngine.InputSystem", "InputRemoting/MessageType");
NEED_NO_BOX(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting*, "UnityEngine.InputSystem", "InputRemoting");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_ConnectMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_ConnectMsg*, "UnityEngine.InputSystem", "InputRemoting/ConnectMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_DisconnectMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_DisconnectMsg*, "UnityEngine.InputSystem", "InputRemoting/DisconnectMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_NewEventsMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*, "UnityEngine.InputSystem", "InputRemoting/NewEventsMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/RemoveDeviceMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_StartSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_StartSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StartSendingMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_StopSendingMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_StopSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StopSendingMsg");
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting_Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_Subscriber*, "UnityEngine.InputSystem", "InputRemoting/Subscriber");
NEED_NO_BOX(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting_Data, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_Message, "UnityEngine.InputSystem", "InputRemoting/Message");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice, "UnityEngine.InputSystem", "InputRemoting/RemoteInputDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting_RemoteSender, "UnityEngine.InputSystem", "InputRemoting/RemoteSender");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting_Data, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/Data");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::NewLayoutMsg_InputRemoting_Data, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg/Data");
