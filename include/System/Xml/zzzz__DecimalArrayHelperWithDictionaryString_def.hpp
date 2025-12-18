#pragma once
// IWYU pragma private; include "System/Xml/DecimalArrayHelperWithDictionaryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalArrayHelperWithDictionaryString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml {
class DecimalArrayHelperWithDictionaryString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::DecimalArrayHelperWithDictionaryString);
// Dependencies System.Decimal, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DecimalArrayHelperWithDictionaryString
class CORDL_TYPE DecimalArrayHelperWithDictionaryString : public ::System::Xml::ArrayHelper_2<::System::Xml::XmlDictionaryString*, ::System::Decimal> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::DecimalArrayHelperWithDictionaryString* Instance;

  static inline ::System::Xml::DecimalArrayHelperWithDictionaryString* New_ctor();

  /// @brief Method ReadArray, addr 0x5f4a4ac, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                           ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5f4a4e4, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                         ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5f4a520, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::DecimalArrayHelperWithDictionaryString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::DecimalArrayHelperWithDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalArrayHelperWithDictionaryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalArrayHelperWithDictionaryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalArrayHelperWithDictionaryString(DecimalArrayHelperWithDictionaryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalArrayHelperWithDictionaryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalArrayHelperWithDictionaryString(DecimalArrayHelperWithDictionaryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DecimalArrayHelperWithDictionaryString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::DecimalArrayHelperWithDictionaryString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DecimalArrayHelperWithDictionaryString*, "System.Xml", "DecimalArrayHelperWithDictionaryString");
