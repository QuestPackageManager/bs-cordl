#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Encoding1234)
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding1234;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Encoding1234);
// Type: System.Xml::Ucs4Encoding1234
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11455))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11456))
// CS Name: ::System.Xml::Ucs4Encoding1234*
class CORDL_TYPE Ucs4Encoding1234 : public ::System::Xml::Ucs4Encoding {
public:
  // Declarations
  __declspec(property(get = get_EncodingName))::StringW EncodingName;

  static inline ::System::Xml::Ucs4Encoding1234* New_ctor();

  /// @brief Method .ctor, addr 0x28a943c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EncodingName, addr 0x28a9630, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_EncodingName();

  /// @brief Method GetPreamble, addr 0x28a9670, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding1234", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ucs4Encoding1234(Ucs4Encoding1234&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding1234", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ucs4Encoding1234(Ucs4Encoding1234 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ucs4Encoding1234();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Encoding1234, 0x40>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Encoding1234);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding1234*, "System.Xml", "Ucs4Encoding1234");
