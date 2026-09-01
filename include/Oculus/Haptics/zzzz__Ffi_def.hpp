#pragma once
// IWYU pragma private; include "Oculus\Haptics\Ffi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ffi)
namespace Oculus::Haptics {
struct Ffi_Controller;
}
namespace Oculus::Haptics {
class Ffi_HapticsSdkPlayCallback;
}
namespace Oculus::Haptics {
class Ffi_LogCallback;
}
namespace Oculus::Haptics {
struct Ffi_LogLevel;
}
namespace Oculus::Haptics {
struct Ffi_NullBackendStatistics;
}
namespace Oculus::Haptics {
struct Ffi_Result;
}
namespace Oculus::Haptics {
struct Ffi_SdkVersion;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Haptics {
struct Ffi_Controller;
}
namespace Oculus::Haptics {
struct Ffi_LogLevel;
}
namespace Oculus::Haptics {
struct Ffi_Result;
}
namespace Oculus::Haptics {
class Ffi;
}
namespace Oculus::Haptics {
class Ffi_HapticsSdkPlayCallback;
}
namespace Oculus::Haptics {
class Ffi_LogCallback;
}
namespace Oculus::Haptics {
struct Ffi_NullBackendStatistics;
}
namespace Oculus::Haptics {
struct Ffi_SdkVersion;
}
// Write type traits
MARK_VAL_T(::Oculus::Haptics::Ffi_Controller);
MARK_VAL_T(::Oculus::Haptics::Ffi_LogLevel);
MARK_VAL_T(::Oculus::Haptics::Ffi_Result);
MARK_REF_T(::Oculus::Haptics::Ffi*);
MARK_REF_T(::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*);
MARK_REF_T(::Oculus::Haptics::Ffi_LogCallback*);
MARK_VAL_T(::Oculus::Haptics::Ffi_NullBackendStatistics);
MARK_VAL_T(::Oculus::Haptics::Ffi_SdkVersion);
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_Controller, "Oculus.Haptics", "Ffi/Controller");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_LogLevel, "Oculus.Haptics", "Ffi/LogLevel");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_Result, "Oculus.Haptics", "Ffi/Result");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi*, "Oculus.Haptics", "Ffi");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_HapticsSdkPlayCallback*, "Oculus.Haptics", "Ffi/HapticsSdkPlayCallback");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_LogCallback*, "Oculus.Haptics", "Ffi/LogCallback");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_NullBackendStatistics, "Oculus.Haptics", "Ffi/NullBackendStatistics");
DEFINE_IL2CPP_CLASS(::Oculus::Haptics::Ffi_SdkVersion, "Oculus.Haptics", "Ffi/SdkVersion");
// Dependencies
namespace Oculus::Haptics {
// Is value type: true
// CS Name: Oculus.Haptics.Ffi/Result
struct CORDL_TYPE Ffi_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Ffi_Result_Unwrapped
  enum struct __Ffi_Result_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0xffffffff),
    __E_InstanceInitializationFailed = static_cast<int32_t>(0xfffffffe),
    __E_InstanceAlreadyInitialized = static_cast<int32_t>(0xfffffffd),
    __E_InstanceAlreadyUninitialized = static_cast<int32_t>(0xfffffffc),
    __E_InstanceNotInitialized = static_cast<int32_t>(0xfffffffb),
    __E_InvalidUtf8 = static_cast<int32_t>(0xfffffffa),
    __E_LoadClipFailed = static_cast<int32_t>(0xfffffff9),
    __E_CreatePlayerFailed = static_cast<int32_t>(0xfffffff8),
    __E_ClipIdInvalid = static_cast<int32_t>(0xfffffff7),
    __E_PlayerIdInvalid = static_cast<int32_t>(0xfffffff6),
    __E_PlayerInvalidAmplitude = static_cast<int32_t>(0xfffffff5),
    __E_PlayerInvalidFrequencyShift = static_cast<int32_t>(0xfffffff4),
    __E_PlayerInvalidPriority = static_cast<int32_t>(0xfffffff3),
    __E_NoClipLoaded = static_cast<int32_t>(0xfffffff2),
    __E_InvalidPlayCallbackPointer = static_cast<int32_t>(0xfffffff1),
    __E_PlayerInvalidSeekPosition = static_cast<int32_t>(0xfffffff0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Ffi_Result_Unwrapped() const noexcept {
    return static_cast<__Ffi_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Ffi_Result(int32_t value__) noexcept;

  /// @brief Field ClipIdInvalid value: I32(-9)
  static ::Oculus::Haptics::Ffi_Result const ClipIdInvalid;

  /// @brief Field CreatePlayerFailed value: I32(-8)
  static ::Oculus::Haptics::Ffi_Result const CreatePlayerFailed;

  /// @brief Field Error value: I32(-1)
  static ::Oculus::Haptics::Ffi_Result const Error;

  /// @brief Field InstanceAlreadyInitialized value: I32(-3)
  static ::Oculus::Haptics::Ffi_Result const InstanceAlreadyInitialized;

  /// @brief Field InstanceAlreadyUninitialized value: I32(-4)
  static ::Oculus::Haptics::Ffi_Result const InstanceAlreadyUninitialized;

  /// @brief Field InstanceInitializationFailed value: I32(-2)
  static ::Oculus::Haptics::Ffi_Result const InstanceInitializationFailed;

  /// @brief Field InstanceNotInitialized value: I32(-5)
  static ::Oculus::Haptics::Ffi_Result const InstanceNotInitialized;

  /// @brief Field InvalidPlayCallbackPointer value: I32(-15)
  static ::Oculus::Haptics::Ffi_Result const InvalidPlayCallbackPointer;

  /// @brief Field InvalidUtf8 value: I32(-6)
  static ::Oculus::Haptics::Ffi_Result const InvalidUtf8;

  /// @brief Field LoadClipFailed value: I32(-7)
  static ::Oculus::Haptics::Ffi_Result const LoadClipFailed;

  /// @brief Field NoClipLoaded value: I32(-14)
  static ::Oculus::Haptics::Ffi_Result const NoClipLoaded;

  /// @brief Field PlayerIdInvalid value: I32(-10)
  static ::Oculus::Haptics::Ffi_Result const PlayerIdInvalid;

  /// @brief Field PlayerInvalidAmplitude value: I32(-11)
  static ::Oculus::Haptics::Ffi_Result const PlayerInvalidAmplitude;

  /// @brief Field PlayerInvalidFrequencyShift value: I32(-12)
  static ::Oculus::Haptics::Ffi_Result const PlayerInvalidFrequencyShift;

  /// @brief Field PlayerInvalidPriority value: I32(-13)
  static ::Oculus::Haptics::Ffi_Result const PlayerInvalidPriority;

  /// @brief Field PlayerInvalidSeekPosition value: I32(-16)
  static ::Oculus::Haptics::Ffi_Result const PlayerInvalidSeekPosition;

  /// @brief Field Success value: I32(0)
  static ::Oculus::Haptics::Ffi_Result const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22794 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::Ffi_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Haptics::Ffi_Result) == 0x4, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies
namespace Oculus::Haptics {
// Is value type: true
// CS Name: Oculus.Haptics.Ffi/SdkVersion
struct CORDL_TYPE Ffi_SdkVersion {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_SdkVersion();

  // Ctor Parameters [CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "patch",
  // ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr Ffi_SdkVersion(uint16_t major, uint16_t minor, uint16_t patch) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22795 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  /// @brief Field major, offset: 0x0, size: 0x2, def value: None
  uint16_t major;

  /// @brief Field minor, offset: 0x2, size: 0x2, def value: None
  uint16_t minor;

  /// @brief Field patch, offset: 0x4, size: 0x2, def value: None
  uint16_t patch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::Ffi_SdkVersion, major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::Ffi_SdkVersion, minor) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::Ffi_SdkVersion, patch) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Oculus::Haptics::Ffi_SdkVersion) == 0x6, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies
namespace Oculus::Haptics {
// Is value type: true
// CS Name: Oculus.Haptics.Ffi/Controller
struct CORDL_TYPE Ffi_Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Ffi_Controller_Unwrapped
  enum struct __Ffi_Controller_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Ffi_Controller_Unwrapped() const noexcept {
    return static_cast<__Ffi_Controller_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_Controller();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Ffi_Controller(int32_t value__) noexcept;

  /// @brief Field Both value: I32(2)
  static ::Oculus::Haptics::Ffi_Controller const Both;

  /// @brief Field Left value: I32(0)
  static ::Oculus::Haptics::Ffi_Controller const Left;

  /// @brief Field Right value: I32(1)
  static ::Oculus::Haptics::Ffi_Controller const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::Ffi_Controller, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Haptics::Ffi_Controller) == 0x4, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies
namespace Oculus::Haptics {
// Is value type: true
// CS Name: Oculus.Haptics.Ffi/LogLevel
struct CORDL_TYPE Ffi_LogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Ffi_LogLevel_Unwrapped
  enum struct __Ffi_LogLevel_Unwrapped : int32_t {
    __E_Trace = static_cast<int32_t>(0x0),
    __E_Debug = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x2),
    __E_Warn = static_cast<int32_t>(0x3),
    __E_Error = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Ffi_LogLevel_Unwrapped() const noexcept {
    return static_cast<__Ffi_LogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_LogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Ffi_LogLevel(int32_t value__) noexcept;

  /// @brief Field Debug value: I32(1)
  static ::Oculus::Haptics::Ffi_LogLevel const Debug;

  /// @brief Field Error value: I32(4)
  static ::Oculus::Haptics::Ffi_LogLevel const Error;

  /// @brief Field Info value: I32(2)
  static ::Oculus::Haptics::Ffi_LogLevel const Info;

  /// @brief Field Trace value: I32(0)
  static ::Oculus::Haptics::Ffi_LogLevel const Trace;

  /// @brief Field Warn value: I32(3)
  static ::Oculus::Haptics::Ffi_LogLevel const Warn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22797 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::Ffi_LogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Haptics::Ffi_LogLevel) == 0x4, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies System.MulticastDelegate
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.Ffi/LogCallback
class CORDL_TYPE Ffi_LogCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5db3304, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Oculus::Haptics::Ffi_LogLevel level, ::StringW message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5db3398, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5db32f0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Oculus::Haptics::Ffi_LogLevel level, ::StringW message);

  static inline ::Oculus::Haptics::Ffi_LogCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5db3284, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_LogCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ffi_LogCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ffi_LogCallback(Ffi_LogCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ffi_LogCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ffi_LogCallback(Ffi_LogCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22798 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Haptics::Ffi_LogCallback) == 0x80, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies System.MulticastDelegate
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.Ffi/HapticsSdkPlayCallback
class CORDL_TYPE Ffi_HapticsSdkPlayCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5db33b8, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr context, ::Oculus::Haptics::Ffi_Controller controller, float_t duration, float_t amplitude, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5db348c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5db33a4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr context, ::Oculus::Haptics::Ffi_Controller controller, float_t duration, float_t amplitude);

  static inline ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5db1a70, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_HapticsSdkPlayCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ffi_HapticsSdkPlayCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ffi_HapticsSdkPlayCallback(Ffi_HapticsSdkPlayCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ffi_HapticsSdkPlayCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ffi_HapticsSdkPlayCallback(Ffi_HapticsSdkPlayCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Haptics::Ffi_HapticsSdkPlayCallback) == 0x80, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies
namespace Oculus::Haptics {
// Is value type: true
// CS Name: Oculus.Haptics.Ffi/NullBackendStatistics
struct CORDL_TYPE Ffi_NullBackendStatistics {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi_NullBackendStatistics();

  // Ctor Parameters [CppParam { name: "stream_count", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "play_call_count", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr Ffi_NullBackendStatistics(int64_t stream_count, int64_t play_call_count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22800 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field stream_count, offset: 0x0, size: 0x8, def value: None
  int64_t stream_count;

  /// @brief Field play_call_count, offset: 0x8, size: 0x8, def value: None
  int64_t play_call_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Haptics::Ffi_NullBackendStatistics, stream_count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::Ffi_NullBackendStatistics, play_call_count) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Haptics::Ffi_NullBackendStatistics) == 0x10, "Size mismatch!");

} // namespace Oculus::Haptics
// Dependencies System.Object
namespace Oculus::Haptics {
// Is value type: false
// CS Name: Oculus.Haptics.Ffi
class CORDL_TYPE Ffi : public ::System::Object {
public:
  // Declarations
  using Controller = ::Oculus::Haptics::Ffi_Controller;

  using HapticsSdkPlayCallback = ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback;

  using LogCallback = ::Oculus::Haptics::Ffi_LogCallback;

  using LogLevel = ::Oculus::Haptics::Ffi_LogLevel;

  using NullBackendStatistics = ::Oculus::Haptics::Ffi_NullBackendStatistics;

  using Result = ::Oculus::Haptics::Ffi_Result;

  using SdkVersion = ::Oculus::Haptics::Ffi_SdkVersion;

  /// @brief Method Failed, addr 0x5db1d08, size 0x8, virtual false, abstract: false, final false
  static inline bool Failed(::Oculus::Haptics::Ffi_Result result);

  static inline ::Oculus::Haptics::Ffi* New_ctor();

  /// @brief Method Succeeded, addr 0x5db1a64, size 0xc, virtual false, abstract: false, final false
  static inline bool Succeeded(::Oculus::Haptics::Ffi_Result result);

  /// @brief Method .ctor, addr 0x5db3280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method clip_duration, addr 0x5db21e0, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result clip_duration(int32_t clipId, ::by_ref<float_t> clip_duration);

  /// @brief Method create_player, addr 0x5db1dd8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result create_player(::by_ref<int32_t> player_id);

  /// @brief Method error_message, addr 0x5db1b68, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW error_message();

  /// @brief Method get_null_backend_statistics, addr 0x5db321c, size 0x64, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_NullBackendStatistics get_null_backend_statistics();

  /// @brief Method haptics_sdk_error_message, addr 0x5db303c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::IntPtr haptics_sdk_error_message();

  /// @brief Method haptics_sdk_error_message_length, addr 0x5db30a0, size 0x64, virtual false, abstract: false, final false
  static inline int32_t haptics_sdk_error_message_length();

  /// @brief Method initialize_logging, addr 0x5db2eac, size 0x80, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result initialize_logging(::Oculus::Haptics::Ffi_LogCallback* logCallback);

  /// @brief Method initialize_with_callback_backend, addr 0x5db1adc, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result initialize_with_callback_backend(::System::IntPtr context, ::Oculus::Haptics::Ffi_HapticsSdkPlayCallback* playCallback);

  /// @brief Method initialize_with_null_backend, addr 0x5db2fd8, size 0x64, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result initialize_with_null_backend();

  /// @brief Method initialize_with_ovr_plugin, addr 0x5db1950, size 0x114, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result initialize_with_ovr_plugin(::StringW game_engine_name, ::StringW game_engine_version, ::StringW game_engine_haptics_sdk_version);

  /// @brief Method initialize_with_ovr_plugin_bytes, addr 0x5db2f2c, size 0xac, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result initialize_with_ovr_plugin_bytes(::ByRefConst<::ArrayW<uint8_t>> game_engine_name, ::ByRefConst<::ArrayW<uint8_t>> game_engine_version,
                                                                               ::ByRefConst<::ArrayW<uint8_t>> game_engine_haptics_sdk_version);

  /// @brief Method initialized, addr 0x5db1c78, size 0x90, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result initialized(::by_ref<bool> initialized);

  /// @brief Method load_clip, addr 0x5db1d10, size 0x4c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result load_clip(::StringW data, ::by_ref<int32_t> clip_id_out);

  /// @brief Method load_clip_bytes, addr 0x5db3180, size 0x9c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result load_clip_bytes(::ByRefConst<::ArrayW<uint8_t>> data, uint32_t data_length, ::by_ref<int32_t> clip_id_out);

  /// @brief Method player_amplitude, addr 0x5db240c, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_amplitude(int32_t playerId, ::by_ref<float_t> amplitude);

  /// @brief Method player_frequency_shift, addr 0x5db251c, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_frequency_shift(int32_t playerId, ::by_ref<float_t> frequency_shift);

  /// @brief Method player_looping_enabled, addr 0x5db22e8, size 0x98, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_looping_enabled(int32_t playerId, ::by_ref<bool> looping_enabled);

  /// @brief Method player_pause, addr 0x5db1fe0, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_pause(int32_t playerId);

  /// @brief Method player_play, addr 0x5db1f5c, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_play(int32_t playerId, ::Oculus::Haptics::Ffi_Controller controller);

  /// @brief Method player_priority, addr 0x5db28f0, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_priority(int32_t playerId, ::by_ref<uint32_t> priority);

  /// @brief Method player_resume, addr 0x5db205c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_resume(int32_t playerId);

  /// @brief Method player_seek, addr 0x5db2154, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_seek(int32_t playerId, float_t time);

  /// @brief Method player_set_amplitude, addr 0x5db2380, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_set_amplitude(int32_t playerId, float_t amplitude);

  /// @brief Method player_set_clip, addr 0x5db1e54, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_set_clip(int32_t playerId, int32_t clipId);

  /// @brief Method player_set_frequency_shift, addr 0x5db2490, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_set_frequency_shift(int32_t playerId, float_t amount);

  /// @brief Method player_set_looping_enabled, addr 0x5db2264, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_set_looping_enabled(int32_t playerId, bool enabled);

  /// @brief Method player_set_priority, addr 0x5db286c, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_set_priority(int32_t playerId, uint32_t priority);

  /// @brief Method player_stop, addr 0x5db20d8, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result player_stop(int32_t playerId);

  /// @brief Method release_clip, addr 0x5db1d5c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result release_clip(int32_t clipId);

  /// @brief Method release_player, addr 0x5db2974, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result release_player(int32_t playerId);

  /// @brief Method set_suspended, addr 0x5db3104, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result set_suspended(bool suspended);

  /// @brief Method uninitialize, addr 0x5db2b38, size 0x64, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_Result uninitialize();

  /// @brief Method version, addr 0x5db2e48, size 0x64, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::Ffi_SdkVersion version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ffi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ffi", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ffi(Ffi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ffi", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ffi(Ffi const&) = delete;

  /// @brief Field InvalidId offset 0xffffffff size 0x4
  static constexpr int32_t InvalidId{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field NativeLibName offset 0xffffffff size 0x8
  static constexpr ::ConstString NativeLibName{ u"haptics_sdk" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22801 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Haptics::Ffi) == 0x10, "Size mismatch!");

} // namespace Oculus::Haptics
