#pragma once
// IWYU pragma private; include "System/Xml/BinHexEncoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinHexEncoder)
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class BinHexEncoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BinHexEncoder);
// Type: System.Xml::BinHexEncoder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::BinHexEncoder*
class CORDL_TYPE BinHexEncoder : public ::System::Object {
public:
  // Declarations
  /// @brief Method Encode, addr 0x41bf57c, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t count);

  /// @brief Method Encode, addr 0x41bf458, size 0x124, virtual false, abstract: false, final false
  static inline int32_t Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> inArray, int32_t offsetIn, int32_t count, ::ArrayW<char16_t, ::Array<char16_t>*> outArray);

  /// @brief Method Encode, addr 0x41bf2bc, size 0x19c, virtual false, abstract: false, final false
  static inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count, ::System::Xml::XmlWriter* writer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinHexEncoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinHexEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinHexEncoder(BinHexEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinHexEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinHexEncoder(BinHexEncoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinHexEncoder, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BinHexEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinHexEncoder*, "System.Xml", "BinHexEncoder");
