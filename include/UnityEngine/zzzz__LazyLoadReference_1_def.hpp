#pragma once
// IWYU pragma private; include "UnityEngine/LazyLoadReference_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LazyLoadReference_1)
// Forward declare root types
namespace UnityEngine {
template <typename T> struct LazyLoadReference_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::LazyLoadReference_1);
// Type: UnityEngine::LazyLoadReference`1
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine::LazyLoadReference`1<T>
struct CORDL_TYPE LazyLoadReference_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyLoadReference_1();

  // Ctor Parameters [CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LazyLoadReference_1(int32_t m_InstanceID) noexcept;

  /// @brief Field m_InstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t m_InstanceID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10853 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::LazyLoadReference_1, "UnityEngine", "LazyLoadReference`1");
