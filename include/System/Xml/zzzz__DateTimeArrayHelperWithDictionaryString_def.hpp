#pragma once
// IWYU pragma private; include "System/Xml/DateTimeArrayHelperWithDictionaryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeArrayHelperWithDictionaryString)
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
struct DateTime;
}
// Forward declare root types
namespace System::Xml {
class DateTimeArrayHelperWithDictionaryString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::DateTimeArrayHelperWithDictionaryString);
// Dependencies System.DateTime, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DateTimeArrayHelperWithDictionaryString
class CORDL_TYPE DateTimeArrayHelperWithDictionaryString : public ::System::Xml::ArrayHelper_2<::System::Xml::XmlDictionaryString*, ::System::DateTime> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::DateTimeArrayHelperWithDictionaryString* Instance;

  static inline ::System::Xml::DateTimeArrayHelperWithDictionaryString* New_ctor();

  /// @brief Method ReadArray, addr 0x5ee2b90, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                           ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5ee2bc8, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                         ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5ee2c04, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::DateTimeArrayHelperWithDictionaryString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::DateTimeArrayHelperWithDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeArrayHelperWithDictionaryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeArrayHelperWithDictionaryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeArrayHelperWithDictionaryString(DateTimeArrayHelperWithDictionaryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeArrayHelperWithDictionaryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeArrayHelperWithDictionaryString(DateTimeArrayHelperWithDictionaryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DateTimeArrayHelperWithDictionaryString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::DateTimeArrayHelperWithDictionaryString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DateTimeArrayHelperWithDictionaryString*, "System.Xml", "DateTimeArrayHelperWithDictionaryString");
