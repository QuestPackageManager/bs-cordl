#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Logger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct LogLevel;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::Logger);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isErrorLogVisible, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isErrorLogVisible, put = setStaticF__isErrorLogVisible)) bool _isErrorLogVisible;

  /// @brief Field _isInfoLogVisible, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isInfoLogVisible, put = setStaticF__isInfoLogVisible)) bool _isInfoLogVisible;

  /// @brief Field _isSharedSpatialAnchorsErrorVisible, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isSharedSpatialAnchorsErrorVisible, put = setStaticF__isSharedSpatialAnchorsErrorVisible)) bool _isSharedSpatialAnchorsErrorVisible;

  /// @brief Field _isVerboseLogVisible, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isVerboseLogVisible, put = setStaticF__isVerboseLogVisible)) bool _isVerboseLogVisible;

  /// @brief Field _isWarningLogVisible, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isWarningLogVisible, put = setStaticF__isWarningLogVisible)) bool _isWarningLogVisible;

  /// @brief Method GetPrefixMessage, addr 0x586c414, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetPrefixMessage(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel logLevel);

  /// @brief Method Log, addr 0x585c02c, size 0xf4, virtual false, abstract: false, final false
  static inline void Log(::StringW message, ::Meta::XR::MultiplayerBlocks::Colocation::LogLevel logLevel);

  /// @brief Method LogError, addr 0x586c2bc, size 0xac, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogInfo, addr 0x586c164, size 0xac, virtual false, abstract: false, final false
  static inline void LogInfo(::StringW message);

  /// @brief Method LogSharedSpatialAnchorsError, addr 0x586c368, size 0xac, virtual false, abstract: false, final false
  static inline void LogSharedSpatialAnchorsError(::StringW message);

  /// @brief Method LogVerbose, addr 0x586c0b8, size 0xac, virtual false, abstract: false, final false
  static inline void LogVerbose(::StringW message);

  /// @brief Method LogWarning, addr 0x586c210, size 0xac, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

  /// @brief Method SetAllLogsVisibility, addr 0x585b27c, size 0x60, virtual false, abstract: false, final false
  static inline void SetAllLogsVisibility(bool value);

  /// @brief Method SetLogLevelVisibility, addr 0x585b2dc, size 0x180, virtual false, abstract: false, final false
  static inline void SetLogLevelVisibility(::Meta::XR::MultiplayerBlocks::Colocation::LogLevel logLevel, bool value);

  static inline bool getStaticF__isErrorLogVisible();

  static inline bool getStaticF__isInfoLogVisible();

  static inline bool getStaticF__isSharedSpatialAnchorsErrorVisible();

  static inline bool getStaticF__isVerboseLogVisible();

  static inline bool getStaticF__isWarningLogVisible();

  static inline void setStaticF__isErrorLogVisible(bool value);

  static inline void setStaticF__isInfoLogVisible(bool value);

  static inline void setStaticF__isSharedSpatialAnchorsErrorVisible(bool value);

  static inline void setStaticF__isVerboseLogVisible(bool value);

  static inline void setStaticF__isWarningLogVisible(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logger(Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logger(Logger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::Logger, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::Logger);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::Logger*, "Meta.XR.MultiplayerBlocks.Colocation", "Logger");
