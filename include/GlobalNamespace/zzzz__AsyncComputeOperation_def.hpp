#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncComputeOperation)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class AsyncComputeOperation;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AsyncComputeOperation);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AsyncComputeOperation
class CORDL_TYPE AsyncComputeOperation : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stopwatch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stopwatch, put = __cordl_internal_set__stopwatch)) ::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Field _timeoutMs, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__timeoutMs, put = __cordl_internal_set__timeoutMs)) int32_t _timeoutMs;

  __declspec(property(get = get_elapsedTime)) double_t elapsedTime;

  __declspec(property(get = get_hasTimedOut)) bool hasTimedOut;

  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute(bool disposed);

  static inline ::GlobalNamespace::AsyncComputeOperation* New_ctor(int32_t timeoutMs);

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__stopwatch() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopwatch();

  constexpr int32_t const& __cordl_internal_get__timeoutMs() const;

  constexpr int32_t& __cordl_internal_get__timeoutMs();

  constexpr void __cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value);

  constexpr void __cordl_internal_set__timeoutMs(int32_t value);

  /// @brief Method .ctor, addr 0x22bda90, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t timeoutMs);

  /// @brief Method get_elapsedTime, addr 0x22bd9dc, size 0x84, virtual false, abstract: false, final false
  inline double_t get_elapsedTime();

  /// @brief Method get_hasTimedOut, addr 0x22bda60, size 0x30, virtual false, abstract: false, final false
  inline bool get_hasTimedOut();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncComputeOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncComputeOperation(AsyncComputeOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncComputeOperation(AsyncComputeOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14687 };

  /// @brief Field _timeoutMs, offset: 0x10, size: 0x4, def value: None
  int32_t ____timeoutMs;

  /// @brief Field _stopwatch, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AsyncComputeOperation, ____timeoutMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncComputeOperation, ____stopwatch) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncComputeOperation, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeOperation*, "", "AsyncComputeOperation");
