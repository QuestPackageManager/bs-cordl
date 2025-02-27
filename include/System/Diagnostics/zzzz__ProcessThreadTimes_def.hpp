#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessThreadTimes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessThreadTimes)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
class ProcessThreadTimes;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessThreadTimes);
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.ProcessThreadTimes
class CORDL_TYPE ProcessThreadTimes : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TotalProcessorTime)) ::System::TimeSpan TotalProcessorTime;

  /// @brief Field create, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_create, put = __cordl_internal_set_create)) int64_t create;

  /// @brief Field exit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_exit, put = __cordl_internal_set_exit)) int64_t exit;

  /// @brief Field kernel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_kernel, put = __cordl_internal_set_kernel)) int64_t kernel;

  /// @brief Field user, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_user, put = __cordl_internal_set_user)) int64_t user;

  static inline ::System::Diagnostics::ProcessThreadTimes* New_ctor();

  constexpr int64_t const& __cordl_internal_get_create() const;

  constexpr int64_t& __cordl_internal_get_create();

  constexpr int64_t const& __cordl_internal_get_exit() const;

  constexpr int64_t& __cordl_internal_get_exit();

  constexpr int64_t const& __cordl_internal_get_kernel() const;

  constexpr int64_t& __cordl_internal_get_kernel();

  constexpr int64_t const& __cordl_internal_get_user() const;

  constexpr int64_t& __cordl_internal_get_user();

  constexpr void __cordl_internal_set_create(int64_t value);

  constexpr void __cordl_internal_set_exit(int64_t value);

  constexpr void __cordl_internal_set_kernel(int64_t value);

  constexpr void __cordl_internal_set_user(int64_t value);

  /// @brief Method .ctor, addr 0x443c5b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TotalProcessorTime, addr 0x443c9a0, size 0xc, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_TotalProcessorTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessThreadTimes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessThreadTimes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessThreadTimes(ProcessThreadTimes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessThreadTimes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessThreadTimes(ProcessThreadTimes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9274 };

  /// @brief Field create, offset: 0x10, size: 0x8, def value: None
  int64_t ___create;

  /// @brief Field exit, offset: 0x18, size: 0x8, def value: None
  int64_t ___exit;

  /// @brief Field kernel, offset: 0x20, size: 0x8, def value: None
  int64_t ___kernel;

  /// @brief Field user, offset: 0x28, size: 0x8, def value: None
  int64_t ___user;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::ProcessThreadTimes, ___create) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessThreadTimes, ___exit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessThreadTimes, ___kernel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::ProcessThreadTimes, ___user) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessThreadTimes, 0x30>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessThreadTimes);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessThreadTimes*, "System.Diagnostics", "ProcessThreadTimes");
