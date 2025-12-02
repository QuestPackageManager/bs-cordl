#pragma once
// IWYU pragma private; include "System/Xml/Int32ArrayHelperWithDictionaryString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int32ArrayHelperWithDictionaryString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
// Forward declare root types
namespace System::Xml {
class Int32ArrayHelperWithDictionaryString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Int32ArrayHelperWithDictionaryString);
// Dependencies System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.Int32ArrayHelperWithDictionaryString
class CORDL_TYPE Int32ArrayHelperWithDictionaryString : public ::System::Xml::ArrayHelper_2<::System::Xml::XmlDictionaryString*, int32_t> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::Int32ArrayHelperWithDictionaryString* Instance;

  static inline ::System::Xml::Int32ArrayHelperWithDictionaryString* New_ctor();

  /// @brief Method ReadArray, addr 0x5ee1f60, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                           ::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5ee1f98, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri,
                         ::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t offset, int32_t count);

  /// @brief Method .ctor, addr 0x5ee1fd4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Int32ArrayHelperWithDictionaryString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::Int32ArrayHelperWithDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int32ArrayHelperWithDictionaryString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Int32ArrayHelperWithDictionaryString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int32ArrayHelperWithDictionaryString(Int32ArrayHelperWithDictionaryString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int32ArrayHelperWithDictionaryString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int32ArrayHelperWithDictionaryString(Int32ArrayHelperWithDictionaryString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Int32ArrayHelperWithDictionaryString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Int32ArrayHelperWithDictionaryString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Int32ArrayHelperWithDictionaryString*, "System.Xml", "Int32ArrayHelperWithDictionaryString");
