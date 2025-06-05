#pragma once
// IWYU pragma private; include "UnityEngine/SerializeField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializeField)
// Forward declare root types
namespace UnityEngine {
class SerializeField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SerializeField);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SerializeField
class CORDL_TYPE SerializeField : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::SerializeField* New_ctor();

  /// @brief Method .ctor, addr 0x48b3a04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializeField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializeField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializeField(SerializeField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializeField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializeField(SerializeField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10929 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SerializeField, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SerializeField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SerializeField*, "UnityEngine", "SerializeField");
