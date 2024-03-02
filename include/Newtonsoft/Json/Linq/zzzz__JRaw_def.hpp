#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
CORDL_MODULE_EXPORT(JRaw)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JRaw;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JRaw);
// Type: Newtonsoft.Json.Linq::JRaw
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JRaw*
class CORDL_TYPE JRaw : public ::Newtonsoft::Json::Linq::JValue {
public:
  // Declarations
  /// @brief Method CloneToken, addr 0x2781cb4, size 0x64, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method Create, addr 0x278193c, size 0x378, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JRaw* Create(::Newtonsoft::Json::JsonReader* reader);

  static inline ::Newtonsoft::Json::Linq::JRaw* New_ctor(::Newtonsoft::Json::Linq::JRaw* other);

  static inline ::Newtonsoft::Json::Linq::JRaw* New_ctor(::System::Object* rawJson);

  /// @brief Method .ctor, addr 0x2781928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JRaw* other);

  /// @brief Method .ctor, addr 0x2781930, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* rawJson);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JRaw(JRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JRaw(JRaw const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JRaw, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JRaw);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JRaw*, "Newtonsoft.Json.Linq", "JRaw");
