#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonotonicTimeProvider)
namespace BGNet::Core {
class ITimeProvider;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class MonotonicTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MonotonicTimeProvider);
// Type: ::MonotonicTimeProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12875))
// CS Name: ::MonotonicTimeProvider*
class CORDL_TYPE MonotonicTimeProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _timeSpanTicksPerStopwatchTick, offset 0x10, size 0x8
  __declspec(property(get = __get__timeSpanTicksPerStopwatchTick, put = __set__timeSpanTicksPerStopwatchTick)) double_t _timeSpanTicksPerStopwatchTick;

  /// @brief Field _startTicks, offset 0x18, size 0x8
  __declspec(property(get = __get__startTicks, put = __set__startTicks)) int64_t _startTicks;

  /// @brief Field _stopwatch, offset 0x20, size 0x8
  __declspec(property(get = __get__stopwatch, put = __set__stopwatch))::System::Diagnostics::Stopwatch* _stopwatch;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::GlobalNamespace::MonotonicTimeProvider* instance;

  /// @brief Convert operator to "::BGNet::Core::ITimeProvider"
  constexpr operator ::BGNet::Core::ITimeProvider*() noexcept;

  constexpr double_t& __get__timeSpanTicksPerStopwatchTick();

  constexpr double_t const& __get__timeSpanTicksPerStopwatchTick() const;

  constexpr void __set__timeSpanTicksPerStopwatchTick(double_t value);

  constexpr int64_t& __get__startTicks();

  constexpr int64_t const& __get__startTicks() const;

  constexpr void __set__startTicks(int64_t value);

  constexpr ::System::Diagnostics::Stopwatch*& __get__stopwatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& __get__stopwatch() const;

  constexpr void __set__stopwatch(::System::Diagnostics::Stopwatch* value);

  static inline void setStaticF_instance(::GlobalNamespace::MonotonicTimeProvider* value);

  static inline ::GlobalNamespace::MonotonicTimeProvider* getStaticF_instance();

  static inline ::GlobalNamespace::MonotonicTimeProvider* New_ctor();

  /// @brief Method .ctor addr 0xe49884 size 0xe4 virtual false final false
  inline void _ctor();

  /// @brief Method GetTimeMs addr 0xe49a1c size 0x2c virtual true final true
  inline int64_t GetTimeMs();

  /// @brief Method GetTicks addr 0xe49a48 size 0x58 virtual true final true
  inline int64_t GetTicks();

  // Ctor Parameters [CppParam { name: "", ty: "MonotonicTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonotonicTimeProvider(MonotonicTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonotonicTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonotonicTimeProvider(MonotonicTimeProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonotonicTimeProvider();

public:
  /// @brief Field _timeSpanTicksPerStopwatchTick, offset: 0x10, size: 0x8, def value: None
  double_t ____timeSpanTicksPerStopwatchTick;

  /// @brief Field _startTicks, offset: 0x18, size: 0x8, def value: None
  int64_t ____startTicks;

  /// @brief Field _stopwatch, offset: 0x20, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ____stopwatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MonotonicTimeProvider, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MonotonicTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonotonicTimeProvider*, "", "MonotonicTimeProvider");
