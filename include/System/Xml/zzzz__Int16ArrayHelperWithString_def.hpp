#pragma once
// IWYU pragma private; include "System/Xml/Int16ArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int16ArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
// Forward declare root types
namespace System::Xml {
class Int16ArrayHelperWithString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Int16ArrayHelperWithString);
// Dependencies System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.Int16ArrayHelperWithString
class CORDL_TYPE Int16ArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, int16_t> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::Int16ArrayHelperWithString* Instance;

  static inline ::System::Xml::Int16ArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x5ee1bb8, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t, ::Array<int16_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5ee1bf0, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t, ::Array<int16_t>*> array, int32_t offset,
                         int32_t count);

  /// @brief Method .ctor, addr 0x5ee1c2c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Int16ArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::Int16ArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int16ArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Int16ArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int16ArrayHelperWithString(Int16ArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int16ArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int16ArrayHelperWithString(Int16ArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Int16ArrayHelperWithString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Int16ArrayHelperWithString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Int16ArrayHelperWithString*, "System.Xml", "Int16ArrayHelperWithString");
