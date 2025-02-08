#pragma once
// IWYU pragma private; include "UnityEngine/IExposedPropertyTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IExposedPropertyTable)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine {
class IExposedPropertyTable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IExposedPropertyTable);
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IExposedPropertyTable
class CORDL_TYPE IExposedPropertyTable {
public:
  // Declarations
  /// @brief Method GetReferenceValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName id, ::ByRef<bool> idValid);

  // Ctor Parameters [CppParam { name: "", ty: "IExposedPropertyTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExposedPropertyTable(IExposedPropertyTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IExposedPropertyTable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IExposedPropertyTable*, "UnityEngine", "IExposedPropertyTable");
