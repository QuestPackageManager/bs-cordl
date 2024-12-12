#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/IWrappedCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
CORDL_MODULE_EXPORT(IWrappedCollection)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::IWrappedCollection);
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.IWrappedCollection
class CORDL_TYPE IWrappedCollection {
public:
  // Declarations
  __declspec(property(get = get_UnderlyingCollection)) ::System::Object* UnderlyingCollection;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method get_UnderlyingCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_UnderlyingCollection();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IWrappedCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWrappedCollection(IWrappedCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::IWrappedCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::IWrappedCollection*, "Newtonsoft.Json.Utilities", "IWrappedCollection");
