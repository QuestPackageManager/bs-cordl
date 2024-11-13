#pragma once
// IWYU pragma private; include "Oculus/Haptics/Ffi.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ffi)
namespace Oculus::Haptics {
struct __Ffi__Controller;
}
namespace Oculus::Haptics {
class __Ffi__LogCallback;
}
namespace Oculus::Haptics {
struct __Ffi__LogLevel;
}
namespace Oculus::Haptics {
struct __Ffi__NullBackendStatistics;
}
namespace Oculus::Haptics {
struct __Ffi__Result;
}
namespace Oculus::Haptics {
struct __Ffi__SdkVersion;
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
struct __Ffi__Controller;
}
namespace Oculus::Haptics {
struct __Ffi__LogLevel;
}
namespace Oculus::Haptics {
struct __Ffi__Result;
}
namespace Oculus::Haptics {
class Ffi;
}
namespace Oculus::Haptics {
class __Ffi__LogCallback;
}
namespace Oculus::Haptics {
struct __Ffi__NullBackendStatistics;
}
namespace Oculus::Haptics {
struct __Ffi__SdkVersion;
}
// Write type traits
MARK_VAL_T(::Oculus::Haptics::__Ffi__Controller);
MARK_VAL_T(::Oculus::Haptics::__Ffi__LogLevel);
MARK_VAL_T(::Oculus::Haptics::__Ffi__Result);
MARK_REF_PTR_T(::Oculus::Haptics::Ffi);
MARK_REF_PTR_T(::Oculus::Haptics::__Ffi__LogCallback);
MARK_VAL_T(::Oculus::Haptics::__Ffi__NullBackendStatistics);
MARK_VAL_T(::Oculus::Haptics::__Ffi__SdkVersion);
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: true
// CS Name: ::Ffi::Result
struct CORDL_TYPE __Ffi__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Ffi__Result_Unwrapped
  enum struct ____Ffi__Result_Unwrapped : int32_t {
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
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Ffi__Result_Unwrapped() const noexcept {
    return static_cast<____Ffi__Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ffi__Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Ffi__Result(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClipIdInvalid value: static_cast<int32_t>(0xfffffff7)
  static ::Oculus::Haptics::__Ffi__Result const ClipIdInvalid;

  /// @brief Field CreatePlayerFailed value: static_cast<int32_t>(0xfffffff8)
  static ::Oculus::Haptics::__Ffi__Result const CreatePlayerFailed;

  /// @brief Field Error value: static_cast<int32_t>(0xffffffff)
  static ::Oculus::Haptics::__Ffi__Result const Error;

  /// @brief Field InstanceAlreadyInitialized value: static_cast<int32_t>(0xfffffffd)
  static ::Oculus::Haptics::__Ffi__Result const InstanceAlreadyInitialized;

  /// @brief Field InstanceAlreadyUninitialized value: static_cast<int32_t>(0xfffffffc)
  static ::Oculus::Haptics::__Ffi__Result const InstanceAlreadyUninitialized;

  /// @brief Field InstanceInitializationFailed value: static_cast<int32_t>(0xfffffffe)
  static ::Oculus::Haptics::__Ffi__Result const InstanceInitializationFailed;

  /// @brief Field InstanceNotInitialized value: static_cast<int32_t>(0xfffffffb)
  static ::Oculus::Haptics::__Ffi__Result const InstanceNotInitialized;

  /// @brief Field InvalidUtf8 value: static_cast<int32_t>(0xfffffffa)
  static ::Oculus::Haptics::__Ffi__Result const InvalidUtf8;

  /// @brief Field LoadClipFailed value: static_cast<int32_t>(0xfffffff9)
  static ::Oculus::Haptics::__Ffi__Result const LoadClipFailed;

  /// @brief Field NoClipLoaded value: static_cast<int32_t>(0xfffffff2)
  static ::Oculus::Haptics::__Ffi__Result const NoClipLoaded;

  /// @brief Field PlayerIdInvalid value: static_cast<int32_t>(0xfffffff6)
  static ::Oculus::Haptics::__Ffi__Result const PlayerIdInvalid;

  /// @brief Field PlayerInvalidAmplitude value: static_cast<int32_t>(0xfffffff5)
  static ::Oculus::Haptics::__Ffi__Result const PlayerInvalidAmplitude;

  /// @brief Field PlayerInvalidFrequencyShift value: static_cast<int32_t>(0xfffffff4)
  static ::Oculus::Haptics::__Ffi__Result const PlayerInvalidFrequencyShift;

  /// @brief Field PlayerInvalidPriority value: static_cast<int32_t>(0xfffffff3)
  static ::Oculus::Haptics::__Ffi__Result const PlayerInvalidPriority;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::Oculus::Haptics::__Ffi__Result const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::__Ffi__Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__Result, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Haptics
// Type: ::SdkVersion
// SizeInfo { instance_size: 6, native_size: 6, calculated_instance_size: 6, calculated_native_size: 22, minimum_alignment: 2, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: true
// CS Name: ::Ffi::SdkVersion
struct CORDL_TYPE __Ffi__SdkVersion {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ffi__SdkVersion();

  // Ctor Parameters [CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "patch",
  // ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr __Ffi__SdkVersion(uint16_t major, uint16_t minor, uint16_t patch) noexcept;

  /// @brief Field major, offset: 0x0, size: 0x2, def value: None
  uint16_t major;

  /// @brief Field minor, offset: 0x2, size: 0x2, def value: None
  uint16_t minor;

  /// @brief Field patch, offset: 0x4, size: 0x2, def value: None
  uint16_t patch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::__Ffi__SdkVersion, 0x6>, "Size mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__SdkVersion, major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__SdkVersion, minor) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__SdkVersion, patch) == 0x4, "Offset mismatch!");

} // namespace Oculus::Haptics
// Type: ::Controller
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: true
// CS Name: ::Ffi::Controller
struct CORDL_TYPE __Ffi__Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Ffi__Controller_Unwrapped
  enum struct ____Ffi__Controller_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Both = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Ffi__Controller_Unwrapped() const noexcept {
    return static_cast<____Ffi__Controller_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ffi__Controller();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Ffi__Controller(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Both value: static_cast<int32_t>(0x2)
  static ::Oculus::Haptics::__Ffi__Controller const Both;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::Oculus::Haptics::__Ffi__Controller const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::Oculus::Haptics::__Ffi__Controller const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::__Ffi__Controller, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__Controller, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Haptics
// Type: ::LogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: true
// CS Name: ::Ffi::LogLevel
struct CORDL_TYPE __Ffi__LogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Ffi__LogLevel_Unwrapped
  enum struct ____Ffi__LogLevel_Unwrapped : int32_t {
    __E_Trace = static_cast<int32_t>(0x0),
    __E_Debug = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x2),
    __E_Warn = static_cast<int32_t>(0x3),
    __E_Error = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Ffi__LogLevel_Unwrapped() const noexcept {
    return static_cast<____Ffi__LogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ffi__LogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Ffi__LogLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Debug value: static_cast<int32_t>(0x1)
  static ::Oculus::Haptics::__Ffi__LogLevel const Debug;

  /// @brief Field Error value: static_cast<int32_t>(0x4)
  static ::Oculus::Haptics::__Ffi__LogLevel const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x2)
  static ::Oculus::Haptics::__Ffi__LogLevel const Info;

  /// @brief Field Trace value: static_cast<int32_t>(0x0)
  static ::Oculus::Haptics::__Ffi__LogLevel const Trace;

  /// @brief Field Warn value: static_cast<int32_t>(0x3)
  static ::Oculus::Haptics::__Ffi__LogLevel const Warn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::__Ffi__LogLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__LogLevel, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Haptics
// Type: ::LogCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: false
// CS Name: ::Ffi::LogCallback*
class CORDL_TYPE __Ffi__LogCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3ef5ad0, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Oculus::Haptics::__Ffi__LogLevel level, ::StringW message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3ef5b64, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3ef5abc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Oculus::Haptics::__Ffi__LogLevel level, ::StringW message);

  static inline ::Oculus::Haptics::__Ffi__LogCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3ef5a30, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ffi__LogCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Ffi__LogCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ffi__LogCallback(__Ffi__LogCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ffi__LogCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ffi__LogCallback(__Ffi__LogCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18693 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::__Ffi__LogCallback, 0x80>, "Size mismatch!");

} // namespace Oculus::Haptics
// Type: ::NullBackendStatistics
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: true
// CS Name: ::Ffi::NullBackendStatistics
struct CORDL_TYPE __Ffi__NullBackendStatistics {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ffi__NullBackendStatistics();

  // Ctor Parameters [CppParam { name: "play_call_count", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "stop_call_count", ty: "int64_t", modifiers: "", def_value: None }, CppParam
  // { name: "samples_played", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr __Ffi__NullBackendStatistics(int64_t play_call_count, int64_t stop_call_count, int64_t samples_played) noexcept;

  /// @brief Field play_call_count, offset: 0x0, size: 0x8, def value: None
  int64_t play_call_count;

  /// @brief Field stop_call_count, offset: 0x8, size: 0x8, def value: None
  int64_t stop_call_count;

  /// @brief Field samples_played, offset: 0x10, size: 0x8, def value: None
  int64_t samples_played;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18694 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::__Ffi__NullBackendStatistics, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__NullBackendStatistics, play_call_count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__NullBackendStatistics, stop_call_count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Haptics::__Ffi__NullBackendStatistics, samples_played) == 0x10, "Offset mismatch!");

} // namespace Oculus::Haptics
// Type: Oculus.Haptics::Ffi
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: false
// CS Name: ::Oculus.Haptics::Ffi*
class CORDL_TYPE Ffi : public ::System::Object {
public:
  // Declarations
  using Controller = ::Oculus::Haptics::__Ffi__Controller;

  using LogCallback = ::Oculus::Haptics::__Ffi__LogCallback;

  using LogLevel = ::Oculus::Haptics::__Ffi__LogLevel;

  using NullBackendStatistics = ::Oculus::Haptics::__Ffi__NullBackendStatistics;

  using Result = ::Oculus::Haptics::__Ffi__Result;

  using SdkVersion = ::Oculus::Haptics::__Ffi__SdkVersion;

  /// @brief Method Failed, addr 0x3ef49cc, size 0x8, virtual false, abstract: false, final false
  static inline bool Failed(::Oculus::Haptics::__Ffi__Result result);

  static inline ::Oculus::Haptics::Ffi* New_ctor();

  /// @brief Method Succeeded, addr 0x3ef4808, size 0xc, virtual false, abstract: false, final false
  static inline bool Succeeded(::Oculus::Haptics::__Ffi__Result result);

  /// @brief Method .ctor, addr 0x3ef5a28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method clip_duration, addr 0x3ef4d20, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result clip_duration(int32_t clipId, ByRef<float_t> clip_duration);

  /// @brief Method create_player, addr 0x3ef4a9c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result create_player(ByRef<int32_t> player_id);

  /// @brief Method error_message, addr 0x3ef4814, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW error_message();

  /// @brief Method get_null_backend_statistics, addr 0x3ef59b4, size 0x74, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__NullBackendStatistics get_null_backend_statistics();

  /// @brief Method haptics_sdk_error_message, addr 0x3ef57cc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr haptics_sdk_error_message();

  /// @brief Method haptics_sdk_error_message_length, addr 0x3ef5834, size 0x68, virtual false, abstract: false, final false
  static inline int32_t haptics_sdk_error_message_length();

  /// @brief Method initialize_with_null_backend, addr 0x3ef574c, size 0x80, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result initialize_with_null_backend(::Oculus::Haptics::__Ffi__LogCallback* logCallback);

  /// @brief Method initialize_with_ovr_plugin, addr 0x3ef46e8, size 0x120, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result initialize_with_ovr_plugin(::StringW game_engine_name, ::StringW game_engine_version, ::StringW game_engine_haptics_sdk_version,
                                                                            ::Oculus::Haptics::__Ffi__LogCallback* logCallback);

  /// @brief Method initialize_with_ovr_plugin_bytes, addr 0x3ef5684, size 0xc8, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result initialize_with_ovr_plugin_bytes(ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_name,
                                                                                  ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_version,
                                                                                  ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> game_engine_haptics_sdk_version,
                                                                                  ::Oculus::Haptics::__Ffi__LogCallback* logCallback);

  /// @brief Method initialized, addr 0x3ef493c, size 0x90, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result initialized(ByRef<bool> initialized);

  /// @brief Method load_clip, addr 0x3ef49d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result load_clip(::StringW data, ByRef<int32_t> clip_id_out);

  /// @brief Method load_clip_bytes, addr 0x3ef5918, size 0x9c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result load_clip_bytes(ByRefConst<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, uint32_t data_length, ByRef<int32_t> clip_id_out);

  /// @brief Method player_amplitude, addr 0x3ef4f4c, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_amplitude(int32_t playerId, ByRef<float_t> amplitude);

  /// @brief Method player_frequency_shift, addr 0x3ef505c, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_frequency_shift(int32_t playerId, ByRef<float_t> frequency_shift);

  /// @brief Method player_looping_enabled, addr 0x3ef4e28, size 0x98, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_looping_enabled(int32_t playerId, ByRef<bool> looping_enabled);

  /// @brief Method player_play, addr 0x3ef4c20, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_play(int32_t playerId, ::Oculus::Haptics::__Ffi__Controller controller);

  /// @brief Method player_priority, addr 0x3ef53ec, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_priority(int32_t playerId, ByRef<uint32_t> priority);

  /// @brief Method player_set_amplitude, addr 0x3ef4ec0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_set_amplitude(int32_t playerId, float_t amplitude);

  /// @brief Method player_set_clip, addr 0x3ef4b18, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_set_clip(int32_t playerId, int32_t clipId);

  /// @brief Method player_set_frequency_shift, addr 0x3ef4fd0, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_set_frequency_shift(int32_t playerId, float_t amount);

  /// @brief Method player_set_looping_enabled, addr 0x3ef4da4, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_set_looping_enabled(int32_t playerId, bool enabled);

  /// @brief Method player_set_priority, addr 0x3ef5368, size 0x84, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_set_priority(int32_t playerId, uint32_t priority);

  /// @brief Method player_stop, addr 0x3ef4ca4, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result player_stop(int32_t playerId);

  /// @brief Method release_clip, addr 0x3ef4a20, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result release_clip(int32_t clipId);

  /// @brief Method release_player, addr 0x3ef5470, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result release_player(int32_t playerId);

  /// @brief Method set_suspended, addr 0x3ef589c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result set_suspended(bool suspended);

  /// @brief Method uninitialize, addr 0x3ef55b0, size 0x68, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Result uninitialize();

  /// @brief Method version, addr 0x3ef5618, size 0x6c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__SdkVersion version();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18695 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::Ffi, 0x10>, "Size mismatch!");

} // namespace Oculus::Haptics
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::__Ffi__Controller, "Oculus.Haptics", "Ffi/Controller");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::__Ffi__LogLevel, "Oculus.Haptics", "Ffi/LogLevel");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::__Ffi__Result, "Oculus.Haptics", "Ffi/Result");
NEED_NO_BOX(::Oculus::Haptics::Ffi);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::Ffi*, "Oculus.Haptics", "Ffi");
NEED_NO_BOX(::Oculus::Haptics::__Ffi__LogCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::__Ffi__LogCallback*, "Oculus.Haptics", "Ffi/LogCallback");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::__Ffi__NullBackendStatistics, "Oculus.Haptics", "Ffi/NullBackendStatistics");
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::__Ffi__SdkVersion, "Oculus.Haptics", "Ffi/SdkVersion");
