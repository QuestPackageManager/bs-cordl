#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
CORDL_MODULE_EXPORT(JsonConverterCollection)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConverterCollection);
// Type: Newtonsoft.Json::JsonConverterCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3814)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3814), inst: 1025 }),
// TypeDefinitionIndex(TypeDefinitionIndex(11830))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11831)) CS Name: ::Newtonsoft.Json::JsonConverterCollection*
class CORDL_TYPE JsonConverterCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::JsonConverter*> {
public:
  // Declarations
  static inline ::Newtonsoft::Json::JsonConverterCollection* New_ctor();

  /// @brief Method .ctor, addr 0x264a52c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverterCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConverterCollection(JsonConverterCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverterCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConverterCollection(JsonConverterCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConverterCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConverterCollection, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConverterCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverterCollection*, "Newtonsoft.Json", "JsonConverterCollection");
