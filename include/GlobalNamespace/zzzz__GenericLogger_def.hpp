#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericLogger)
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
class __GenericLogger__ScopedStopwatch;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericLogger;
}
namespace GlobalNamespace {
class __GenericLogger__ScopedStopwatch;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GenericLogger);
MARK_REF_PTR_T(::GlobalNamespace::__GenericLogger__ScopedStopwatch);
// Type: ::ScopedStopwatch
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GenericLogger::ScopedStopwatch*
class CORDL_TYPE __GenericLogger__ScopedStopwatch : public ::System::Object {
public:
  // Declarations
  /// @brief Field _processName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__processName, put = __cordl_internal_set__processName))::StringW _processName;

  /// @brief Field _stopwatch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stopwatch, put = __cordl_internal_set__stopwatch))::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x24d2668, size 0xc4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::__GenericLogger__ScopedStopwatch* New_ctor(::StringW processName);

  constexpr ::StringW const& __cordl_internal_get__processName() const;

  constexpr ::StringW& __cordl_internal_get__processName();

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get__stopwatch() const;

  constexpr void __cordl_internal_set__processName(::StringW value);

  constexpr void __cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x24d25b0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW processName);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GenericLogger__ScopedStopwatch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GenericLogger__ScopedStopwatch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GenericLogger__ScopedStopwatch(__GenericLogger__ScopedStopwatch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GenericLogger__ScopedStopwatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GenericLogger__ScopedStopwatch(__GenericLogger__ScopedStopwatch const&) = delete;

  /// @brief Field _processName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____processName;

  /// @brief Field _stopwatch, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GenericLogger__ScopedStopwatch, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GenericLogger__ScopedStopwatch, ____processName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GenericLogger__ScopedStopwatch, ____stopwatch) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GenericLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GenericLogger*
class CORDL_TYPE GenericLogger : public ::System::Object {
public:
  // Declarations
  using ScopedStopwatch = ::GlobalNamespace::__GenericLogger__ScopedStopwatch;

  /// @brief Method Format, addr 0x24d2308, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW Format(::GlobalNamespace::IVerboseLogger* logger, ::StringW message);

  /// @brief Method Log, addr 0x24d23f4, size 0x78, virtual false, abstract: false, final false
  static inline void Log(::GlobalNamespace::IVerboseLogger* logger, ::StringW message);

  /// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Log(T logger, ::StringW message);

  /// @brief Method LogWithTimestamp, addr 0x24d246c, size 0x144, virtual false, abstract: false, final false
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

  /// @brief Field kVerboseLogDefineSymbol offset 0xffffffff size 0x8
  static constexpr ::ConstString kVerboseLogDefineSymbol{ u"VERBOSE_LOGGING" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GenericLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GenericLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GenericLogger*, "", "GenericLogger");
NEED_NO_BOX(::GlobalNamespace::__GenericLogger__ScopedStopwatch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GenericLogger__ScopedStopwatch*, "", "GenericLogger/ScopedStopwatch");
