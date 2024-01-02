#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
CORDL_MODULE_EXPORT(JsonLinqContract)
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonLinqContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonLinqContract);
// Type: Newtonsoft.Json.Serialization::JsonLinqContract
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11943))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11914))
// CS Name: ::Newtonsoft.Json.Serialization::JsonLinqContract*
class CORDL_TYPE JsonLinqContract : public ::Newtonsoft::Json::Serialization::JsonContract {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::JsonLinqContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor, addr 0x266e1a8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  // Ctor Parameters [CppParam { name: "", ty: "JsonLinqContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonLinqContract(JsonLinqContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonLinqContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonLinqContract(JsonLinqContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonLinqContract();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonLinqContract, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonLinqContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonLinqContract*, "Newtonsoft.Json.Serialization", "JsonLinqContract");
