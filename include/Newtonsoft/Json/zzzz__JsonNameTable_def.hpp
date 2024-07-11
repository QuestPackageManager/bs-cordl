#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonNameTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonNameTable)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonNameTable;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonNameTable);
// Type: Newtonsoft.Json::JsonNameTable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonNameTable*
class CORDL_TYPE JsonNameTable : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW Get(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t length);

  static inline ::Newtonsoft::Json::JsonNameTable* New_ctor();

  /// @brief Method .ctor, addr 0x29f2c7c, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonNameTable, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonNameTable);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonNameTable*, "Newtonsoft.Json", "JsonNameTable");
