#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Performance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Performance)
// Forward declare root types
namespace Unity::XR::Oculus {
class Performance;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Performance);
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Performance
class CORDL_TYPE Performance : public ::System::Object {
public:
  // Declarations
  /// @brief Field cachedDisplayAvailableFrequencies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cachedDisplayAvailableFrequencies, put = setStaticF_cachedDisplayAvailableFrequencies)) ::ArrayW<float_t, ::Array<float_t>*> cachedDisplayAvailableFrequencies;

  /// @brief Method TryGetAvailableDisplayRefreshRates, addr 0x482f8e0, size 0x19c, virtual false, abstract: false, final false
  static inline bool TryGetAvailableDisplayRefreshRates(::ByRef<::ArrayW<float_t, ::Array<float_t>*>> refreshRates);

  /// @brief Method TryGetDisplayRefreshRate, addr 0x482fa88, size 0x4, virtual false, abstract: false, final false
  static inline bool TryGetDisplayRefreshRate(::ByRef<float_t> refreshRate);

  /// @brief Method TrySetCPULevel, addr 0x482f8a8, size 0x18, virtual false, abstract: false, final false
  static inline bool TrySetCPULevel(int32_t level);

  /// @brief Method TrySetDisplayRefreshRate, addr 0x482fa80, size 0x4, virtual false, abstract: false, final false
  static inline bool TrySetDisplayRefreshRate(float_t refreshRate);

  /// @brief Method TrySetGPULevel, addr 0x482f8c4, size 0x18, virtual false, abstract: false, final false
  static inline bool TrySetGPULevel(int32_t level);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_cachedDisplayAvailableFrequencies();

  static inline void setStaticF_cachedDisplayAvailableFrequencies(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Performance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Performance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Performance(Performance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Performance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Performance(Performance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Performance, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::Performance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Performance*, "Unity.XR.Oculus", "Performance");
