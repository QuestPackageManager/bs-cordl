#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExposedReference_1)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine {
template <typename T> struct ExposedReference_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ExposedReference_1);
// Type: UnityEngine::ExposedReference`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10159))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10046))
// CS Name: ::UnityEngine::ExposedReference`1<T>
struct CORDL_TYPE ExposedReference_1 {
public:
  // Declarations
  /// @brief Method Resolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Resolve(::UnityEngine::IExposedPropertyTable* resolver);

  // Ctor Parameters [CppParam { name: "exposedName", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: None }, CppParam { name: "defaultValue", ty: "::UnityEngine::Object*", modifiers: "",
  // def_value: None }]
  constexpr ExposedReference_1(::UnityEngine::PropertyName exposedName, ::UnityEngine::Object* defaultValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExposedReference_1();

  /// @brief Field exposedName, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::PropertyName exposedName;

  /// @brief Field defaultValue, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Object* defaultValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ExposedReference_1, "UnityEngine", "ExposedReference`1");
