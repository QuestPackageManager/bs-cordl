#pragma once
// IWYU pragma private; include "System/Xml/DateTimeArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Xml {
class DateTimeArrayHelperWithString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::DateTimeArrayHelperWithString);
// Dependencies System.DateTime, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.DateTimeArrayHelperWithString
class CORDL_TYPE DateTimeArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, ::System::DateTime> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::DateTimeArrayHelperWithString* Instance;

  static inline ::System::Xml::DateTimeArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x5ee2a58, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array, int32_t offset,
                           int32_t count);

  /// @brief Method WriteArray, addr 0x5ee2a90, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> array,
                         int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5ee2acc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::DateTimeArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::DateTimeArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeArrayHelperWithString(DateTimeArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeArrayHelperWithString(DateTimeArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DateTimeArrayHelperWithString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::DateTimeArrayHelperWithString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DateTimeArrayHelperWithString*, "System.Xml", "DateTimeArrayHelperWithString");
