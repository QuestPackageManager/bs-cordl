#pragma once
// IWYU pragma private; include "Unity/Properties/IConstructorWithCount_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IConstructorWithCount_1)
namespace Unity::Properties {
class IConstructor;
}
// Forward declare root types
namespace Unity::Properties {
template <typename T> class IConstructorWithCount_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IConstructorWithCount_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Properties.IConstructorWithCount`1<T>
class CORDL_TYPE IConstructorWithCount_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::IConstructor"
  constexpr operator ::Unity::Properties::IConstructor*() noexcept;

  /// @brief Method InstantiateWithCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T InstantiateWithCount(int32_t count);

  /// @brief Convert to "::Unity::Properties::IConstructor"
  constexpr ::Unity::Properties::IConstructor* i___Unity__Properties__IConstructor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IConstructorWithCount_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConstructorWithCount_1(IConstructorWithCount_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19420 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IConstructorWithCount_1, "Unity.Properties", "IConstructorWithCount`1");
