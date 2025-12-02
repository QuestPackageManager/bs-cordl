#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDataArrays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IDataArrays)
// Forward declare root types
namespace UnityEngine::Rendering {
class IDataArrays;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDataArrays);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDataArrays
class CORDL_TYPE IDataArrays {
public:
  // Declarations
  /// @brief Method Dispose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method Grow, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Grow(int32_t newCapacity);

  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize(int32_t initCapacity);

  /// @brief Method Remove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Remove(int32_t index, int32_t lastIndex);

  /// @brief Method SetDefault, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetDefault(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "IDataArrays", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataArrays(IDataArrays const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDataArrays);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDataArrays*, "UnityEngine.Rendering", "IDataArrays");
