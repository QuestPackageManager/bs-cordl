#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericLogger)
namespace GlobalNamespace {
class GenericLogger_ScopedStopwatch;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericLogger;
}
namespace GlobalNamespace {
class GenericLogger_ScopedStopwatch;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GenericLogger);
MARK_REF_PTR_T(::GlobalNamespace::GenericLogger_ScopedStopwatch);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GenericLogger/ScopedStopwatch
class CORDL_TYPE GenericLogger_ScopedStopwatch : public ::System::Object {
public:
  // Declarations
  /// @brief Field _processName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__processName, put = __cordl_internal_set__processName)) ::StringW _processName;

  /// @brief Field _stopwatch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stopwatch, put = __cordl_internal_set__stopwatch)) ::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x39c4d08, size 0xf0, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::GenericLogger_ScopedStopwatch* New_ctor(::StringW processName);

  constexpr ::StringW const& __cordl_internal_get__processName() const;

  constexpr ::StringW& __cordl_internal_get__processName();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__stopwatch() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopwatch();

  constexpr void __cordl_internal_set__processName(::StringW value);

  constexpr void __cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x39c4c2c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::StringW processName);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericLogger_ScopedStopwatch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericLogger_ScopedStopwatch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericLogger_ScopedStopwatch(GenericLogger_ScopedStopwatch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericLogger_ScopedStopwatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericLogger_ScopedStopwatch(GenericLogger_ScopedStopwatch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16392 };

  /// @brief Field _processName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____processName;

  /// @brief Field _stopwatch, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GenericLogger_ScopedStopwatch, ____processName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericLogger_ScopedStopwatch, ____stopwatch) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GenericLogger_ScopedStopwatch, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GenericLogger
class CORDL_TYPE GenericLogger : public ::System::Object {
public:
  // Declarations
  using ScopedStopwatch = ::GlobalNamespace::GenericLogger_ScopedStopwatch;

  /// @brief Method Format, addr 0x39c4988, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW Format(::GlobalNamespace::IVerboseLogger* logger, ::StringW message);

  /// @brief Method Log, addr 0x39c4a74, size 0x78, virtual false, abstract: false, final false
  static inline void Log(::GlobalNamespace::IVerboseLogger* logger, ::StringW message);

  /// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Log(T logger, ::StringW message);

  /// @brief Method LogWithTimestamp, addr 0x39c4aec, size 0x140, virtual false, abstract: false, final false
  static inline void LogWithTimestamp(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericLogger(GenericLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericLogger(GenericLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16393 };

  /// @brief Field kVerboseLogDefineSymbol offset 0xffffffff size 0x8
  static constexpr ::ConstString kVerboseLogDefineSymbol{ u"BS_VERBOSE_LOGGING" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GenericLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GenericLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GenericLogger*, "", "GenericLogger");
NEED_NO_BOX(::GlobalNamespace::GenericLogger_ScopedStopwatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GenericLogger_ScopedStopwatch*, "", "GenericLogger/ScopedStopwatch");
