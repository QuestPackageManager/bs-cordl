#pragma once
// IWYU pragma private; include "System\Resources\IResourceGroveler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IResourceGroveler)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class ResourceSet;
}
namespace System::Threading {
struct StackCrawlMark;
}
// Forward declare root types
namespace System::Resources {
class IResourceGroveler;
}
// Write type traits
MARK_REF_T(::System::Resources::IResourceGroveler*);
DEFINE_IL2CPP_CLASS(::System::Resources::IResourceGroveler*, "System.Resources", "IResourceGroveler");
// Dependencies
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.IResourceGroveler
class CORDL_TYPE IResourceGroveler {
public:
  // Declarations
  /// @brief Method GrovelForResourceSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                bool createIfNotExists, ::by_ref<::System::Threading::StackCrawlMark> stackMark);

  // Ctor Parameters [CppParam { name: "", ty: "IResourceGroveler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IResourceGroveler(IResourceGroveler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Resources
