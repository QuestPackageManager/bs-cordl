#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonPrimitiveContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
CORDL_MODULE_EXPORT(JsonPrimitiveContract)
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonPrimitiveContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonPrimitiveContract);
// Dependencies Newtonsoft.Json.Serialization.JsonContract, Newtonsoft.Json.Utilities.PrimitiveTypeCode
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonPrimitiveContract
class CORDL_TYPE JsonPrimitiveContract : public ::Newtonsoft::Json::Serialization::JsonContract {
public:
  // Declarations
  /// @brief Field ReadTypeMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ReadTypeMap, put = setStaticF_ReadTypeMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* ReadTypeMap;

  __declspec(property(get = get_TypeCode, put = set_TypeCode)) ::Newtonsoft::Json::Utilities::PrimitiveTypeCode TypeCode;

  /// @brief Field <TypeCode>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__TypeCode_k__BackingField,
                      put = __cordl_internal_set__TypeCode_k__BackingField)) ::Newtonsoft::Json::Utilities::PrimitiveTypeCode _TypeCode_k__BackingField;

  static inline ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* New_ctor(::System::Type* underlyingType);

  constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode const& __cordl_internal_get__TypeCode_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode& __cordl_internal_get__TypeCode_k__BackingField();

  constexpr void __cordl_internal_set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);

  /// @brief Method .ctor, addr 0x5b8eacc, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* getStaticF_ReadTypeMap();

  /// @brief Method get_TypeCode, addr 0x5b95cb8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Utilities::PrimitiveTypeCode get_TypeCode();

  static inline void setStaticF_ReadTypeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::ReadType>* value);

  /// @brief Method set_TypeCode, addr 0x5b95cc0, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonPrimitiveContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonPrimitiveContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonPrimitiveContract(JsonPrimitiveContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonPrimitiveContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonPrimitiveContract(JsonPrimitiveContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13485 };

  /// @brief Field <TypeCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  ::Newtonsoft::Json::Utilities::PrimitiveTypeCode ____TypeCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonPrimitiveContract, ____TypeCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonPrimitiveContract, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonPrimitiveContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, "Newtonsoft.Json.Serialization", "JsonPrimitiveContract");
