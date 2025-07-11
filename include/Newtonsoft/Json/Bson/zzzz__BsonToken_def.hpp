#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonToken)
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonToken);
// Dependencies System.Object
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonToken
class CORDL_TYPE BsonToken : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CalculatedSize, put = set_CalculatedSize)) int32_t CalculatedSize;

  __declspec(property(get = get_Parent, put = set_Parent)) ::Newtonsoft::Json::Bson::BsonToken* Parent;

  __declspec(property(get = get_Type)) ::Newtonsoft::Json::Bson::BsonType Type;

  /// @brief Field <CalculatedSize>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__CalculatedSize_k__BackingField, put = __cordl_internal_set__CalculatedSize_k__BackingField)) int32_t _CalculatedSize_k__BackingField;

  /// @brief Field <Parent>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Parent_k__BackingField, put = __cordl_internal_set__Parent_k__BackingField)) ::Newtonsoft::Json::Bson::BsonToken* _Parent_k__BackingField;

  static inline ::Newtonsoft::Json::Bson::BsonToken* New_ctor();

  constexpr int32_t const& __cordl_internal_get__CalculatedSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__CalculatedSize_k__BackingField();

  constexpr ::Newtonsoft::Json::Bson::BsonToken* const& __cordl_internal_get__Parent_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__Parent_k__BackingField();

  constexpr void __cordl_internal_set__CalculatedSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Parent_k__BackingField(::Newtonsoft::Json::Bson::BsonToken* value);

  /// @brief Method .ctor, addr 0x3f52b78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CalculatedSize, addr 0x3f52b68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CalculatedSize();

  /// @brief Method get_Parent, addr 0x3f52b58, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonToken* get_Parent();

  /// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  /// @brief Method set_CalculatedSize, addr 0x3f52b70, size 0x8, virtual false, abstract: false, final false
  inline void set_CalculatedSize(int32_t value);

  /// @brief Method set_Parent, addr 0x3f52b60, size 0x8, virtual false, abstract: false, final false
  inline void set_Parent(::Newtonsoft::Json::Bson::BsonToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonToken();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonToken(BsonToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonToken(BsonToken const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10511 };

  /// @brief Field <Parent>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonToken* ____Parent_k__BackingField;

  /// @brief Field <CalculatedSize>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____CalculatedSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonToken, ____Parent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonToken, ____CalculatedSize_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonToken, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonToken*, "Newtonsoft.Json.Bson", "BsonToken");
