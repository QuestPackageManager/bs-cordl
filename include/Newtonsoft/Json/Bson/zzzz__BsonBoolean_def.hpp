#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
CORDL_MODULE_EXPORT(BsonBoolean)
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonBoolean;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonBoolean);
// Type: Newtonsoft.Json.Bson::BsonBoolean
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonBoolean*
class CORDL_TYPE BsonBoolean : public ::Newtonsoft::Json::Bson::BsonValue {
public:
  // Declarations
  /// @brief Field False, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_False, put = setStaticF_False))::Newtonsoft::Json::Bson::BsonBoolean* False;

  /// @brief Field True, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_True, put = setStaticF_True))::Newtonsoft::Json::Bson::BsonBoolean* True;

  static inline ::Newtonsoft::Json::Bson::BsonBoolean* New_ctor(bool value);

  /// @brief Method .ctor, addr 0x2abc24c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  static inline ::Newtonsoft::Json::Bson::BsonBoolean* getStaticF_False();

  static inline ::Newtonsoft::Json::Bson::BsonBoolean* getStaticF_True();

  static inline void setStaticF_False(::Newtonsoft::Json::Bson::BsonBoolean* value);

  static inline void setStaticF_True(::Newtonsoft::Json::Bson::BsonBoolean* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonBoolean(BsonBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonBoolean(BsonBoolean const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonBoolean, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBoolean);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBoolean*, "Newtonsoft.Json.Bson", "BsonBoolean");
