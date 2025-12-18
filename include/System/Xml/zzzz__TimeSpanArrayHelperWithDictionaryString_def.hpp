#pragma once
// IWYU pragma private; include "System/Xml/TimeSpanArrayHelperWithDictionaryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanArrayHelperWithDictionaryString)
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
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
class TimeSpanArrayHelperWithDictionaryString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::TimeSpanArrayHelperWithDictionaryString);
// Dependencies System.TimeSpan, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.TimeSpanArrayHelperWithDictionaryString
class CORDL_TYPE TimeSpanArrayHelperWithDictionaryString : public ::System::Xml::ArrayHelper_2<::System::Xml::XmlDictionaryString*, ::System::TimeSpan> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::TimeSpanArrayHelperWithDictionaryString* Instance;

  static inline ::System::Xml::TimeSpanArrayHelperWithDictionaryString* New_ctor();

  /// @brief Method ReadArray, addr 0x5f4abfc, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                           ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5f4ac34, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                         ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5f4ac70, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::TimeSpanArrayHelperWithDictionaryString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::TimeSpanArrayHelperWithDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanArrayHelperWithDictionaryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanArrayHelperWithDictionaryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanArrayHelperWithDictionaryString(TimeSpanArrayHelperWithDictionaryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanArrayHelperWithDictionaryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanArrayHelperWithDictionaryString(TimeSpanArrayHelperWithDictionaryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TimeSpanArrayHelperWithDictionaryString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TimeSpanArrayHelperWithDictionaryString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TimeSpanArrayHelperWithDictionaryString*, "System.Xml", "TimeSpanArrayHelperWithDictionaryString");
