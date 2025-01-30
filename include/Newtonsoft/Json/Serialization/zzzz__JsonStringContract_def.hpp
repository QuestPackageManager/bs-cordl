#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonStringContract.hpp"
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
// Dependencies Newtonsoft.Json.Serialization.JsonPrimitiveContract
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonStringContract
class CORDL_TYPE JsonStringContract : public ::Newtonsoft::Json::Serialization::JsonPrimitiveContract {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::JsonStringContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor, addr 0x3efe278, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonStringContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonStringContract(JsonStringContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonStringContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonStringContract(JsonStringContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonStringContract, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonStringContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonStringContract*, "Newtonsoft.Json.Serialization", "JsonStringContract");
