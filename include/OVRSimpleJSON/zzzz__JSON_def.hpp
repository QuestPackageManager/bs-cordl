#pragma once
// IWYU pragma private; include "OVRSimpleJSON\JSON.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JSON)
namespace OVRSimpleJSON {
class JSONNode;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSON;
}
// Write type traits
MARK_REF_T(::OVRSimpleJSON::JSON*);
DEFINE_IL2CPP_CLASS(::OVRSimpleJSON::JSON*, "OVRSimpleJSON", "JSON");
// Dependencies System.Object
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: OVRSimpleJSON.JSON
class CORDL_TYPE JSON : public ::System::Object {
public:
  // Declarations
  /// @brief Method Parse, addr 0x5e2b930, size 0x5c, virtual false, abstract: false, final false
  static inline ::OVRSimpleJSON::JSONNode* Parse(::StringW aJSON);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8033 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVRSimpleJSON::JSON) == 0x10, "Size mismatch!");

} // namespace OVRSimpleJSON
