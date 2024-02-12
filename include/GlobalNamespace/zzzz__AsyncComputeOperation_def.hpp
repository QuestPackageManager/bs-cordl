#pragma once
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
// Type: ::AsyncComputeOperation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12577))
// CS Name: ::AsyncComputeOperation*
class CORDL_TYPE AsyncComputeOperation : public ::System::Object {
public:
  // Declarations
  /// @brief Field _timeoutMs, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__timeoutMs, put = __cordl_internal_set__timeoutMs)) int32_t _timeoutMs;

  /// @brief Field _stopwatch, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stopwatch, put = __cordl_internal_set__stopwatch))::System::Diagnostics::Stopwatch* _stopwatch;

  __declspec(property(get = get_elapsedTime)) double_t elapsedTime;

  __declspec(property(get = get_hasTimedOut)) bool hasTimedOut;

  constexpr int32_t& __cordl_internal_get__timeoutMs();

  constexpr int32_t const& __cordl_internal_get__timeoutMs() const;

  constexpr void __cordl_internal_set__timeoutMs(int32_t value);

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __cordl_internal_get__stopwatch() const;

  constexpr void __cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method get_elapsedTime, addr 0xe540f0, size 0x84, virtual false, abstract: false, final false
  inline double_t get_elapsedTime();

  /// @brief Method get_hasTimedOut, addr 0xe54174, size 0x30, virtual false, abstract: false, final false
  inline bool get_hasTimedOut();

  static inline ::GlobalNamespace::AsyncComputeOperation* New_ctor(int32_t timeoutMs);

  /// @brief Method .ctor, addr 0xe541a4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t timeoutMs);

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Execute(bool disposed);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncComputeOperation(AsyncComputeOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncComputeOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncComputeOperation(AsyncComputeOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncComputeOperation();

public:
  /// @brief Field _timeoutMs, offset: 0x10, size: 0x4, def value: None
  int32_t ____timeoutMs;

  /// @brief Field _stopwatch, offset: 0x18, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AsyncComputeOperation, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncComputeOperation, ____timeoutMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncComputeOperation, ____stopwatch) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AsyncComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AsyncComputeOperation*, "", "AsyncComputeOperation");
