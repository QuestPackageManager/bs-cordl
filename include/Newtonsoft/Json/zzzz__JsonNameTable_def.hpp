#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonNameTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonNameTable)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonNameTable;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonNameTable);
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonNameTable
class CORDL_TYPE JsonNameTable : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Get(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t length);

  static inline ::Newtonsoft::Json::JsonNameTable* New_ctor();

  /// @brief Method .ctor, addr 0x5abdb7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonNameTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonNameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonNameTable(JsonNameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonNameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonNameTable(JsonNameTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonNameTable, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonNameTable);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonNameTable*, "Newtonsoft.Json", "JsonNameTable");
