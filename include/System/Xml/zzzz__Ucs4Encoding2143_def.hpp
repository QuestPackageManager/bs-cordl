#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Encoding2143)
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding2143;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Encoding2143);
// Type: System.Xml::Ucs4Encoding2143
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::Ucs4Encoding2143*
class CORDL_TYPE Ucs4Encoding2143 : public ::System::Xml::Ucs4Encoding {
public:
  // Declarations
  __declspec(property(get = get_EncodingName))::StringW EncodingName;

  /// @brief Method GetPreamble, addr 0x2dba878, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  static inline ::System::Xml::Ucs4Encoding2143* New_ctor();

  /// @brief Method .ctor, addr 0x2dba590, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EncodingName, addr 0x2dba838, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_EncodingName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ucs4Encoding2143();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding2143", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ucs4Encoding2143(Ucs4Encoding2143&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding2143", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ucs4Encoding2143(Ucs4Encoding2143 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Encoding2143, 0x40>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Encoding2143);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding2143*, "System.Xml", "Ucs4Encoding2143");
