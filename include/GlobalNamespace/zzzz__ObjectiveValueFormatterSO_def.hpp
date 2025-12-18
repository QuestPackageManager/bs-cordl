#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectiveValueFormatterSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectiveValueFormatterSO)
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveValueFormatterSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectiveValueFormatterSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectiveValueFormatterSO
class CORDL_TYPE ObjectiveValueFormatterSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Method FormatValue, addr 0x3633b00, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW FormatValue(int32_t value);

  static inline ::GlobalNamespace::ObjectiveValueFormatterSO* New_ctor();

  /// @brief Method .ctor, addr 0x3633718, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectiveValueFormatterSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectiveValueFormatterSO(ObjectiveValueFormatterSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveValueFormatterSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectiveValueFormatterSO(ObjectiveValueFormatterSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15039 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectiveValueFormatterSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveValueFormatterSO*, "", "ObjectiveValueFormatterSO");
