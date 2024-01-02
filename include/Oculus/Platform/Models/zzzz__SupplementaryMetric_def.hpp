#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupplementaryMetric)
// Forward declare root types
namespace Oculus::Platform::Models {
class SupplementaryMetric;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SupplementaryMetric);
// Type: Oculus.Platform.Models::SupplementaryMetric
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13482))
// CS Name: ::Oculus.Platform.Models::SupplementaryMetric*
class CORDL_TYPE SupplementaryMetric : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field Metric, offset 0x18, size 0x8
  __declspec(property(get = __get_Metric, put = __set_Metric)) int64_t Metric;

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr int64_t& __get_Metric();

  constexpr int64_t const& __get_Metric() const;

  constexpr void __set_Metric(int64_t value);

  static inline ::Oculus::Platform::Models::SupplementaryMetric* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2706c38, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "SupplementaryMetric", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupplementaryMetric(SupplementaryMetric&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupplementaryMetric", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupplementaryMetric(SupplementaryMetric const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupplementaryMetric();

public:
  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field Metric, offset: 0x18, size: 0x8, def value: None
  int64_t ___Metric;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SupplementaryMetric, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SupplementaryMetric, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SupplementaryMetric, ___Metric) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SupplementaryMetric);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SupplementaryMetric*, "Oculus.Platform.Models", "SupplementaryMetric");
