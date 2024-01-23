#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CollectionUtilities)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class CollectionUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::CollectionUtilities);
// Type: Org.BouncyCastle.Utilities.Collections::CollectionUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1777))
// CS Name: ::Org.BouncyCastle.Utilities.Collections::CollectionUtilities*
class CORDL_TYPE CollectionUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddRange, addr 0x1156e58, size 0x35c, virtual false, abstract: false, final false
  static inline void AddRange(::System::Collections::IList* to, ::System::Collections::IEnumerable* range);

  /// @brief Method CheckElementsAreOfType, addr 0x11571b4, size 0x314, virtual false, abstract: false, final false
  static inline bool CheckElementsAreOfType(::System::Collections::IEnumerable* e, ::System::Type* t);

  /// @brief Method ReadOnly, addr 0x11574c8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* ReadOnly(::System::Collections::IDictionary* d);

  /// @brief Method ReadOnly, addr 0x1155dfc, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::IList* ReadOnly(::System::Collections::IList* l);

  /// @brief Method ReadOnly, addr 0x1155d98, size 0x64, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* ReadOnly(::Org::BouncyCastle::Utilities::Collections::ISet* s);

  /// @brief Method RequireNext, addr 0x11575a4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Object* RequireNext(::System::Collections::IEnumerator* e);

  /// @brief Method ToString, addr 0x11576dc, size 0x30c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Collections::IEnumerable* c);

  static inline ::Org::BouncyCastle::Utilities::Collections::CollectionUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x11579e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionUtilities(CollectionUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionUtilities(CollectionUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::CollectionUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::CollectionUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::CollectionUtilities*, "Org.BouncyCastle.Utilities.Collections", "CollectionUtilities");
