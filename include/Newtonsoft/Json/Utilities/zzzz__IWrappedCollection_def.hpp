#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWrappedCollection)
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::IWrappedCollection);
// Type: Newtonsoft.Json.Utilities::IWrappedCollection
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11877))
// CS Name: ::Newtonsoft.Json.Utilities::IWrappedCollection*
class CORDL_TYPE IWrappedCollection {
public:
  // Declarations
  __declspec(property(get = get_UnderlyingCollection))::System::Object* UnderlyingCollection;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_UnderlyingCollection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_UnderlyingCollection();

  // Ctor Parameters [CppParam { name: "", ty: "IWrappedCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IWrappedCollection(IWrappedCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IWrappedCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWrappedCollection(IWrappedCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::IWrappedCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::IWrappedCollection*, "Newtonsoft.Json.Utilities", "IWrappedCollection");
