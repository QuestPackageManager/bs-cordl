#pragma once
// IWYU pragma private; include "System/Xml/TimeSpanArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
class TimeSpanArrayHelperWithString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::TimeSpanArrayHelperWithString);
// Dependencies System.TimeSpan, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.TimeSpanArrayHelperWithString
class CORDL_TYPE TimeSpanArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, ::System::TimeSpan> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::TimeSpanArrayHelperWithString* Instance;

  static inline ::System::Xml::TimeSpanArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x5f4aac4, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array, int32_t offset,
                           int32_t count);

  /// @brief Method WriteArray, addr 0x5f4aafc, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> array,
                         int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5f4ab38, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::TimeSpanArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::TimeSpanArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanArrayHelperWithString(TimeSpanArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanArrayHelperWithString(TimeSpanArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::TimeSpanArrayHelperWithString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::TimeSpanArrayHelperWithString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::TimeSpanArrayHelperWithString*, "System.Xml", "TimeSpanArrayHelperWithString");
