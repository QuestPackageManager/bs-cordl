#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Platform)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Platform;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Platform);
// Type: Org.BouncyCastle.Utilities::Platform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1836))
// CS Name: ::Org.BouncyCastle.Utilities::Platform*
class CORDL_TYPE Platform : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvariantCompareInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvariantCompareInfo, put = setStaticF_InvariantCompareInfo))::System::Globalization::CompareInfo* InvariantCompareInfo;

  /// @brief Field NewLine, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NewLine, put = setStaticF_NewLine))::StringW NewLine;

  static inline void setStaticF_InvariantCompareInfo(::System::Globalization::CompareInfo* value);

  static inline ::System::Globalization::CompareInfo* getStaticF_InvariantCompareInfo();

  static inline void setStaticF_NewLine(::StringW value);

  static inline ::StringW getStaticF_NewLine();

  /// @brief Method GetNewLine, addr 0x116dc44, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetNewLine();

  /// @brief Method EqualsIgnoreCase, addr 0x116dc4c, size 0x7c, virtual false, abstract: false, final false
  static inline bool EqualsIgnoreCase(::StringW a, ::StringW b);

  /// @brief Method GetEnvironmentVariable, addr 0x116dd34, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentVariable(::StringW variable);

  /// @brief Method CreateNotImplementedException, addr 0x116ddbc, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateNotImplementedException(::StringW message);

  /// @brief Method CreateArrayList, addr 0x116de20, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList();

  /// @brief Method CreateArrayList, addr 0x116de7c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(int32_t capacity);

  /// @brief Method CreateArrayList, addr 0x116dee0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(::System::Collections::ICollection* collection);

  /// @brief Method CreateArrayList, addr 0x116df44, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(::System::Collections::IEnumerable* collection);

  /// @brief Method CreateHashtable, addr 0x116e258, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateHashtable();

  /// @brief Method CreateHashtable, addr 0x116e2b4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateHashtable(int32_t capacity);

  /// @brief Method CreateHashtable, addr 0x116e318, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateHashtable(::System::Collections::IDictionary* dictionary);

  /// @brief Method ToLowerInvariant, addr 0x116e37c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToLowerInvariant(::StringW s);

  /// @brief Method ToUpperInvariant, addr 0x116dcc8, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToUpperInvariant(::StringW s);

  /// @brief Method Dispose, addr 0x116a164, size 0x20, virtual false, abstract: false, final false
  static inline void Dispose(::System::IO::Stream* s);

  /// @brief Method Dispose, addr 0x116e3e8, size 0x1c, virtual false, abstract: false, final false
  static inline void Dispose(::System::IO::TextWriter* t);

  /// @brief Method IndexOf, addr 0x116e404, size 0x84, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::StringW source, ::StringW value);

  /// @brief Method LastIndexOf, addr 0x116e488, size 0x88, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(::StringW source, ::StringW value);

  /// @brief Method StartsWith, addr 0x116e510, size 0x84, virtual false, abstract: false, final false
  static inline bool StartsWith(::StringW source, ::StringW prefix);

  /// @brief Method EndsWith, addr 0x116e594, size 0x84, virtual false, abstract: false, final false
  static inline bool EndsWith(::StringW source, ::StringW suffix);

  /// @brief Method GetTypeName, addr 0x116e618, size 0x2c, virtual false, abstract: false, final false
  static inline ::StringW GetTypeName(::System::Object* obj);

  static inline ::Org::BouncyCastle::Utilities::Platform* New_ctor();

  /// @brief Method .ctor, addr 0x116e6e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Platform(Platform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Platform(Platform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Platform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Platform, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Platform);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Platform*, "Org.BouncyCastle.Utilities", "Platform");
