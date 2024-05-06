#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConverterBase)
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class DateTimeConverterBase;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::DateTimeConverterBase);
// Type: Newtonsoft.Json.Converters::DateTimeConverterBase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::DateTimeConverterBase*
class CORDL_TYPE DateTimeConverterBase : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x2a84aac, size 0x174, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::DateTimeConverterBase* New_ctor();

  /// @brief Method .ctor, addr 0x2a84c20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeConverterBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverterBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeConverterBase(DateTimeConverterBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverterBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeConverterBase(DateTimeConverterBase const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::DateTimeConverterBase, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::DateTimeConverterBase);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DateTimeConverterBase*, "Newtonsoft.Json.Converters", "DateTimeConverterBase");
