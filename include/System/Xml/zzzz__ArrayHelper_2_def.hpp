#pragma once
// IWYU pragma private; include "System/Xml/ArrayHelper_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayHelper_2)
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryWriter;
}
// Forward declare root types
namespace System::Xml {
template <typename TArgument, typename TArray> class ArrayHelper_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Xml::ArrayHelper_2);
// Dependencies System.Object
namespace System::Xml {
// cpp template
template <typename TArgument, typename TArray>
// Is value type: false
// CS Name: System.Xml.ArrayHelper`2<TArgument,TArray>
class CORDL_TYPE ArrayHelper_2 : public ::System::Object {
public:
  // Declarations
  static inline ::System::Xml::ArrayHelper_2<TArgument, TArray>* New_ctor();

  /// @brief Method ReadArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<TArray, ::Array<TArray>*> ReadArray(::System::Xml::XmlDictionaryReader* reader, TArgument localName, TArgument namespaceUri, int32_t maxArrayLength);

  /// @brief Method ReadArray, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t ReadArray(::System::Xml::XmlDictionaryReader* reader, TArgument localName, TArgument namespaceUri, ::ArrayW<TArray, ::Array<TArray>*> array, int32_t offset, int32_t count);

  /// @brief Method WriteArray, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, TArgument localName, TArgument namespaceUri, ::ArrayW<TArray, ::Array<TArray>*> array, int32_t offset,
                         int32_t count);

  /// @brief Method WriteArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, TArgument localName, TArgument namespaceUri, ::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayHelper_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayHelper_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayHelper_2(ArrayHelper_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayHelper_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayHelper_2(ArrayHelper_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::ArrayHelper_2, "System.Xml", "ArrayHelper`2");
