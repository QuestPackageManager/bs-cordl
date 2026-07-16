#pragma once
// IWYU pragma private; include "System/Xml/BinHexEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Xml::BinHexEncoder*);
DEFINE_IL2CPP_CLASS(::System::Xml::BinHexEncoder*, "System.Xml", "BinHexEncoder");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BinHexEncoder
class CORDL_TYPE BinHexEncoder : public ::System::Object {
public:
  // Declarations
  /// @brief Method Encode, addr 0x618dd84, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW Encode(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t count);

  /// @brief Method Encode, addr 0x618dc54, size 0x130, virtual false, abstract: false, final false
  static inline int32_t Encode(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t count, ::ArrayW<char16_t> outArray);

  /// @brief Method Encode, addr 0x618dab4, size 0x1a0, virtual false, abstract: false, final false
  static inline void Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, ::System::Xml::XmlWriter* writer);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::BinHexEncoder) == 0x10, "Size mismatch!");

} // namespace System::Xml
