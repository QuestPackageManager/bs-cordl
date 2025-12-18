#pragma once
// IWYU pragma private; include "System/Xml/SingleArrayHelperWithString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SingleArrayHelperWithString)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
// Forward declare root types
namespace System::Xml {
class SingleArrayHelperWithString;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::SingleArrayHelperWithString);
// Dependencies System.Xml.ArrayHelper`2<TArgument, TArray>
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.SingleArrayHelperWithString
class CORDL_TYPE SingleArrayHelperWithString : public ::System::Xml::ArrayHelper_2<::StringW, float_t> {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::System::Xml::SingleArrayHelperWithString* Instance;

  static inline ::System::Xml::SingleArrayHelperWithString* New_ctor();

  /// @brief Method ReadArray, addr 0x5f49e94, size 0x38, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t, ::Array<float_t>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0x5f49ecc, size 0x3c, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t, ::Array<float_t>*> array, int32_t offset,
                         int32_t count);

  /// @brief Method .ctor, addr 0x5f49f08, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::SingleArrayHelperWithString* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Xml::SingleArrayHelperWithString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleArrayHelperWithString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SingleArrayHelperWithString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleArrayHelperWithString(SingleArrayHelperWithString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleArrayHelperWithString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleArrayHelperWithString(SingleArrayHelperWithString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::SingleArrayHelperWithString, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::SingleArrayHelperWithString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SingleArrayHelperWithString*, "System.Xml", "SingleArrayHelperWithString");
