#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWrappedDictionary)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::IWrappedDictionary);
// Type: Newtonsoft.Json.Utilities::IWrappedDictionary
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11880))
// CS Name: ::Newtonsoft.Json.Utilities::IWrappedDictionary*
class CORDL_TYPE IWrappedDictionary {
public:
  // Declarations
  __declspec(property(get = get_UnderlyingDictionary))::System::Object* UnderlyingDictionary;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method get_UnderlyingDictionary, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_UnderlyingDictionary();

  // Ctor Parameters [CppParam { name: "", ty: "IWrappedDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IWrappedDictionary(IWrappedDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IWrappedDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWrappedDictionary(IWrappedDictionary const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::IWrappedDictionary);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::IWrappedDictionary*, "Newtonsoft.Json.Utilities", "IWrappedDictionary");
