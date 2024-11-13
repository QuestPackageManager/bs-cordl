#pragma once
// IWYU pragma private; include "UnityEngine/IExposedPropertyTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::IExposedPropertyTable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::IExposedPropertyTable*
class CORDL_TYPE IExposedPropertyTable {
public:
  // Declarations
  /// @brief Method GetReferenceValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Object> GetReferenceValue(::UnityEngine::PropertyName id, ByRef<bool> idValid);

  // Ctor Parameters [CppParam { name: "", ty: "IExposedPropertyTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IExposedPropertyTable(IExposedPropertyTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IExposedPropertyTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IExposedPropertyTable(IExposedPropertyTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10654 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IExposedPropertyTable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IExposedPropertyTable*, "UnityEngine", "IExposedPropertyTable");
