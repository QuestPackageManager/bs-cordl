#pragma once
// IWYU pragma private; include "System/Xml/GuidArrayHelperWithDictionaryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidArrayHelperWithDictionaryString)
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
struct Guid;
}
// Forward declare root types
namespace System::Xml {
class GuidArrayHelperWithDictionaryString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::GuidArrayHelperWithDictionaryString);
// Dependencies System.Guid, System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.GuidArrayHelperWithDictionaryString
class CORDL_TYPE GuidArrayHelperWithDictionaryString : public ::System::Xml::ArrayHelper_2<::System::Xml::XmlDictionaryString*, ::System::Guid> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::GuidArrayHelperWithDictionaryString* Instance;

  static inline ::System::Xml::GuidArrayHelperWithDictionaryString* New_ctor();

  /// @brief Method ReadArray, addr 0x5f4a98c, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                           ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5f4a9c4, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                         ::ArrayW<::System::Guid, ::Array<::System::Guid>*> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5f4aa00, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::GuidArrayHelperWithDictionaryString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::GuidArrayHelperWithDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuidArrayHelperWithDictionaryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuidArrayHelperWithDictionaryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuidArrayHelperWithDictionaryString(GuidArrayHelperWithDictionaryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuidArrayHelperWithDictionaryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuidArrayHelperWithDictionaryString(GuidArrayHelperWithDictionaryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::GuidArrayHelperWithDictionaryString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::GuidArrayHelperWithDictionaryString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::GuidArrayHelperWithDictionaryString*, "System.Xml", "GuidArrayHelperWithDictionaryString");
