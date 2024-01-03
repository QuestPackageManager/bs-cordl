#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiscellaneousUtils)
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class MiscellaneousUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::MiscellaneousUtils);
// Type: Newtonsoft.Json.Utilities::MiscellaneousUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11894))
// CS Name: ::Newtonsoft.Json.Utilities::MiscellaneousUtils*
class CORDL_TYPE MiscellaneousUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ValueEquals, addr 0x2665770, size 0x2b0, virtual false, abstract: false, final false
  static inline bool ValueEquals(::System::Object* objA, ::System::Object* objB);

  /// @brief Method CreateArgumentOutOfRangeException, addr 0x2655e40, size 0x100, virtual false, abstract: false, final false
  static inline ::System::ArgumentOutOfRangeException* CreateArgumentOutOfRangeException(::StringW paramName, ::System::Object* actualValue, ::StringW message);

  /// @brief Method ToString, addr 0x2665a20, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value);

  /// @brief Method ByteArrayCompare, addr 0x2665acc, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t ByteArrayCompare(::ArrayW<uint8_t, ::Array<uint8_t>*> a1, ::ArrayW<uint8_t, ::Array<uint8_t>*> a2);

  /// @brief Method GetPrefix, addr 0x2665b80, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW GetPrefix(::StringW qualifiedName);

  /// @brief Method GetLocalName, addr 0x2665c38, size 0x24, virtual false, abstract: false, final false
  static inline ::StringW GetLocalName(::StringW qualifiedName);

  /// @brief Method GetQualifiedNameParts, addr 0x2665ba4, size 0x94, virtual false, abstract: false, final false
  static inline void GetQualifiedNameParts(::StringW qualifiedName, ByRef<::StringW> prefix, ByRef<::StringW> localName);

  /// @brief Method FormatValueForPrint, addr 0x2665c5c, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW FormatValueForPrint(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "MiscellaneousUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscellaneousUtils(MiscellaneousUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscellaneousUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscellaneousUtils(MiscellaneousUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscellaneousUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::MiscellaneousUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::MiscellaneousUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::MiscellaneousUtils*, "Newtonsoft.Json.Utilities", "MiscellaneousUtils");
