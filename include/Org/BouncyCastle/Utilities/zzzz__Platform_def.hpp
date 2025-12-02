#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Platform.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Platform
class CORDL_TYPE Platform : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvariantCompareInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvariantCompareInfo, put = setStaticF_InvariantCompareInfo)) ::System::Globalization::CompareInfo* InvariantCompareInfo;

  /// @brief Field NewLine, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NewLine, put = setStaticF_NewLine)) ::StringW NewLine;

  /// @brief Method CreateArrayList, addr 0x3517c5c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList();

  /// @brief Method CreateArrayList, addr 0x3517cb4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(int32_t capacity);

  /// @brief Method CreateArrayList, addr 0x3517d14, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(::System::Collections::ICollection* collection);

  /// @brief Method CreateArrayList, addr 0x3517d74, size 0x2fc, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* CreateArrayList(::System::Collections::IEnumerable* collection);

  /// @brief Method CreateHashtable, addr 0x3518070, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateHashtable();

  /// @brief Method CreateHashtable, addr 0x35180cc, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateHashtable(int32_t capacity);

  /// @brief Method CreateHashtable, addr 0x351812c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateHashtable(::System::Collections::IDictionary* dictionary);

  /// @brief Method CreateNotImplementedException, addr 0x3517bf0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Exception* CreateNotImplementedException(::StringW message);

  /// @brief Method Dispose, addr 0x3513e2c, size 0x1c, virtual false, abstract: false, final false
  static inline void Dispose(::System::IO::Stream* s);

  /// @brief Method Dispose, addr 0x3518200, size 0x18, virtual false, abstract: false, final false
  static inline void Dispose(::System::IO::TextWriter* t);

  /// @brief Method EndsWith, addr 0x35183b4, size 0x88, virtual false, abstract: false, final false
  static inline bool EndsWith(::StringW source, ::StringW suffix);

  /// @brief Method EqualsIgnoreCase, addr 0x3517a7c, size 0x7c, virtual false, abstract: false, final false
  static inline bool EqualsIgnoreCase(::StringW a, ::StringW b);

  /// @brief Method GetEnvironmentVariable, addr 0x3517b68, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GetEnvironmentVariable(::StringW variable);

  /// @brief Method GetNewLine, addr 0x3517a74, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetNewLine();

  /// @brief Method GetTypeName, addr 0x351843c, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW GetTypeName(::System::Object* obj);

  /// @brief Method IndexOf, addr 0x3518218, size 0x88, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::StringW source, ::StringW value);

  /// @brief Method LastIndexOf, addr 0x35182a0, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(::StringW source, ::StringW value);

  static inline ::Org::BouncyCastle::Utilities::Platform* New_ctor();

  /// @brief Method StartsWith, addr 0x351832c, size 0x88, virtual false, abstract: false, final false
  static inline bool StartsWith(::StringW source, ::StringW prefix);

  /// @brief Method ToLowerInvariant, addr 0x3518190, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToLowerInvariant(::StringW s);

  /// @brief Method ToUpperInvariant, addr 0x3517af8, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToUpperInvariant(::StringW s);

  /// @brief Method .ctor, addr 0x3518510, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Globalization::CompareInfo* getStaticF_InvariantCompareInfo();

  static inline ::StringW getStaticF_NewLine();

  static inline void setStaticF_InvariantCompareInfo(::System::Globalization::CompareInfo* value);

  static inline void setStaticF_NewLine(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Platform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Platform(Platform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Platform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Platform(Platform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Platform, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Platform);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Platform*, "Org.BouncyCastle.Utilities", "Platform");
