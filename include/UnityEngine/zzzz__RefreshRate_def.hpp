#pragma once
// IWYU pragma private; include "UnityEngine/RefreshRate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RefreshRate)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct RefreshRate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RefreshRate);
// Type: UnityEngine::RefreshRate
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RefreshRate
struct CORDL_TYPE RefreshRate {
public:
  // Declarations
  __declspec(property(get = get_value)) double_t value;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::RefreshRate>"
  constexpr operator ::System::IComparable_1<::UnityEngine::RefreshRate>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::RefreshRate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::RefreshRate>*();

  /// @brief Method CompareTo, addr 0x47fc260, size 0x50, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::RefreshRate other);

  /// @brief Method Equals, addr 0x47fc224, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::RefreshRate other);

  /// @brief Method ToString, addr 0x47fc2b0, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_value, addr 0x47fc210, size 0x14, virtual false, abstract: false, final false
  inline double_t get_value();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::RefreshRate>"
  constexpr ::System::IComparable_1<::UnityEngine::RefreshRate>* i___System__IComparable_1___UnityEngine__RefreshRate_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::RefreshRate>"
  constexpr ::System::IEquatable_1<::UnityEngine::RefreshRate>* i___System__IEquatable_1___UnityEngine__RefreshRate_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshRate();

  // Ctor Parameters [CppParam { name: "numerator", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "denominator", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RefreshRate(uint32_t numerator, uint32_t denominator) noexcept;

  /// @brief Field numerator, offset: 0x0, size: 0x4, def value: None
  uint32_t numerator;

  /// @brief Field denominator, offset: 0x4, size: 0x4, def value: None
  uint32_t denominator;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10675 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RefreshRate, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RefreshRate, numerator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RefreshRate, denominator) == 0x4, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RefreshRate, "UnityEngine", "RefreshRate");
