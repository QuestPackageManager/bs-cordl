#pragma once
// IWYU pragma private; include "System/Xml/BooleanArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BooleanArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
// Forward declare root types
namespace System::Xml {
class BooleanArrayHelperWithString;
}
// Write type traits
MARK_REF_T(::System::Xml::BooleanArrayHelperWithString*);
DEFINE_IL2CPP_CLASS(::System::Xml::BooleanArrayHelperWithString*, "System.Xml", "BooleanArrayHelperWithString");
// Dependencies System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BooleanArrayHelperWithString
class CORDL_TYPE BooleanArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, bool> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::BooleanArrayHelperWithString* Instance;

  static inline ::System::Xml::BooleanArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x60f8814, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x60f884c, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<bool> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x60f8888, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::BooleanArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::BooleanArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BooleanArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BooleanArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BooleanArrayHelperWithString(BooleanArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BooleanArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BooleanArrayHelperWithString(BooleanArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::BooleanArrayHelperWithString) == 0x10, "Size mismatch!");

} // namespace System::Xml
