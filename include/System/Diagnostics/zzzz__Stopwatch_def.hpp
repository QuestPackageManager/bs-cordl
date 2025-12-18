#pragma once
// IWYU pragma private; include "System/Diagnostics/Stopwatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Stopwatch)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
class Stopwatch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Stopwatch);
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.Stopwatch
class CORDL_TYPE Stopwatch : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Elapsed)) ::System::TimeSpan Elapsed;

  __declspec(property(get = get_ElapsedMilliseconds)) int64_t ElapsedMilliseconds;

  __declspec(property(get = get_ElapsedTicks)) int64_t ElapsedTicks;

  /// @brief Field Frequency, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Frequency, put = setStaticF_Frequency)) int64_t Frequency;

  /// @brief Field IsHighResolution, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsHighResolution, put = setStaticF_IsHighResolution)) bool IsHighResolution;

  __declspec(property(get = get_IsRunning)) bool IsRunning;

  /// @brief Field elapsed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elapsed, put = __cordl_internal_set_elapsed)) int64_t elapsed;

  /// @brief Field is_running, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_is_running, put = __cordl_internal_set_is_running)) bool is_running;

  /// @brief Field started, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) int64_t started;

  /// @brief Method GetTimestamp, addr 0x61e28c0, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetTimestamp();

  static inline ::System::Diagnostics::Stopwatch* New_ctor();

  /// @brief Method Reset, addr 0x61eabc0, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Restart, addr 0x61eac48, size 0x64, virtual false, abstract: false, final false
  inline void Restart();

  /// @brief Method Start, addr 0x61ea878, size 0x6c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartNew, addr 0x61ea818, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::Stopwatch* StartNew();

  /// @brief Method Stop, addr 0x61eabcc, size 0x7c, virtual false, abstract: false, final false
  inline void Stop();

  constexpr int64_t const& __cordl_internal_get_elapsed() const;

  constexpr int64_t& __cordl_internal_get_elapsed();

  constexpr bool const& __cordl_internal_get_is_running() const;

  constexpr bool& __cordl_internal_get_is_running();

  constexpr int64_t const& __cordl_internal_get_started() const;

  constexpr int64_t& __cordl_internal_get_started();

  constexpr void __cordl_internal_set_elapsed(int64_t value);

  constexpr void __cordl_internal_set_is_running(bool value);

  constexpr void __cordl_internal_set_started(int64_t value);

  /// @brief Method .ctor, addr 0x61ea874, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int64_t getStaticF_Frequency();

  static inline bool getStaticF_IsHighResolution();

  /// @brief Method get_Elapsed, addr 0x61ea8e4, size 0xf8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_Elapsed();

  /// @brief Method get_ElapsedMilliseconds, addr 0x61eaa50, size 0x168, virtual false, abstract: false, final false
  inline int64_t get_ElapsedMilliseconds();

  /// @brief Method get_ElapsedTicks, addr 0x61ea9dc, size 0x74, virtual false, abstract: false, final false
  inline int64_t get_ElapsedTicks();

  /// @brief Method get_IsRunning, addr 0x61eabb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsRunning();

  static inline void setStaticF_Frequency(int64_t value);

  static inline void setStaticF_IsHighResolution(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stopwatch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stopwatch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stopwatch(Stopwatch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stopwatch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stopwatch(Stopwatch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11134 };

  /// @brief Field elapsed, offset: 0x10, size: 0x8, def value: None
  int64_t ___elapsed;

  /// @brief Field started, offset: 0x18, size: 0x8, def value: None
  int64_t ___started;

  /// @brief Field is_running, offset: 0x20, size: 0x1, def value: None
  bool ___is_running;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Stopwatch, ___elapsed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Stopwatch, ___started) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Stopwatch, ___is_running) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Stopwatch, 0x28>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::Stopwatch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Stopwatch*, "System.Diagnostics", "Stopwatch");
