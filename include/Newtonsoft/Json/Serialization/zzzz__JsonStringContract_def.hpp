#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
CORDL_MODULE_EXPORT(JsonStringContract)
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonStringContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonStringContract);
// Type: Newtonsoft.Json.Serialization::JsonStringContract
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11915))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11958))
// CS Name: ::Newtonsoft.Json.Serialization::JsonStringContract*
class CORDL_TYPE JsonStringContract : public ::Newtonsoft::Json::Serialization::JsonPrimitiveContract {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::JsonStringContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor addr 0x268e148 size 0x74 virtual false final false
  inline void _ctor(::System::Type* underlyingType);

  // Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonStringContract(JsonStringContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonStringContract(JsonStringContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonStringContract();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonStringContract, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonStringContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonStringContract*, "Newtonsoft.Json.Serialization", "JsonStringContract");
