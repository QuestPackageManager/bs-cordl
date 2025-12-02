#pragma once
// IWYU pragma private; include "System/Xml/Int64ArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int64ArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
// Forward declare root types
namespace System::Xml {
class Int64ArrayHelperWithString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Int64ArrayHelperWithString);
// Dependencies System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.Int64ArrayHelperWithString
class CORDL_TYPE Int64ArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, int64_t> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::Int64ArrayHelperWithString* Instance;

  static inline ::System::Xml::Int64ArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x5ee2098, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t, ::Array<int64_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5ee20d0, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t, ::Array<int64_t>*> array, int32_t offset,
                         int32_t count);

  /// @brief Method .ctor, addr 0x5ee210c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Int64ArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::Int64ArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int64ArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Int64ArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int64ArrayHelperWithString(Int64ArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int64ArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int64ArrayHelperWithString(Int64ArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Int64ArrayHelperWithString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Int64ArrayHelperWithString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Int64ArrayHelperWithString*, "System.Xml", "Int64ArrayHelperWithString");
