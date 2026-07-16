#pragma once
// IWYU pragma private; include "System/Xml/DecimalArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml {
class DecimalArrayHelperWithString;
}
// Write type traits
MARK_REF_T(::System::Xml::DecimalArrayHelperWithString*);
DEFINE_IL2CPP_CLASS(::System::Xml::DecimalArrayHelperWithString*, "System.Xml", "DecimalArrayHelperWithString");
// Dependencies System.Decimal, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DecimalArrayHelperWithString
class CORDL_TYPE DecimalArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, ::System::Decimal> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::DecimalArrayHelperWithString* Instance;

  static inline ::System::Xml::DecimalArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x60f96b4, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x60f96ec, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x60f9728, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::DecimalArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::DecimalArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalArrayHelperWithString(DecimalArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalArrayHelperWithString(DecimalArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::DecimalArrayHelperWithString) == 0x10, "Size mismatch!");

} // namespace System::Xml
