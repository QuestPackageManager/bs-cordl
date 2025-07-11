#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryConverter)
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryConverter);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
class CORDL_TYPE BinaryConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBinaryTypeInfo, addr 0x3cfea48, size 0x2dc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum
  GetBinaryTypeInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::StringW typeName,
                    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::ByRef<::System::Object*> typeInformation, ::ByRef<int32_t> assemId);

  /// @brief Method GetParserBinaryTypeInfo, addr 0x3cff01c, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(::System::Type* type, ::ByRef<::System::Object*> typeInformation);

  /// @brief Method ReadTypeInfo, addr 0x3cff598, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Object* ReadTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum,
                                               ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::ByRef<int32_t> assemId);

  /// @brief Method TypeFromInfo, addr 0x3cff738, size 0x34c, virtual false, abstract: false, final false
  static inline void TypeFromInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation,
                                  ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader,
                                  ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo,
                                  ::ByRef<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> primitiveTypeEnum, ::ByRef<::StringW> typeString, ::ByRef<::System::Type*> type,
                                  ::ByRef<bool> isVariant);

  /// @brief Method WriteTypeInfo, addr 0x3cff310, size 0x220, virtual false, abstract: false, final false
  static inline void WriteTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation, int32_t assemId,
                                   ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryConverter(BinaryConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryConverter(BinaryConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryConverter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryConverter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryConverter");
