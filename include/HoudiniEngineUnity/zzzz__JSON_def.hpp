#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/JSON.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JSON)
namespace HoudiniEngineUnity {
class JSONNode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSON;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::JSON);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.JSON
class CORDL_TYPE JSON : public ::System::Object {
public:
  // Declarations
  /// @brief Method Parse, addr 0x3a951e0, size 0x4, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::JSONNode* Parse(::StringW aJSON);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JSON();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JSON", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JSON(JSON&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JSON", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JSON(JSON const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::JSON, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::JSON);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSON*, "HoudiniEngineUnity", "JSON");
