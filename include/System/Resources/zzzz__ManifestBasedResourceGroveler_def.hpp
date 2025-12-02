#pragma once
// IWYU pragma private; include "System/Resources/ManifestBasedResourceGroveler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestBasedResourceGroveler)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class Stream;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Resources {
class ResourceManager_ResourceManagerMediator;
}
namespace System::Resources {
class ResourceSet;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
namespace System::Threading {
struct StackCrawlMark;
}
// Forward declare root types
namespace System::Resources {
class ManifestBasedResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ManifestBasedResourceGroveler);
// Dependencies System.Object
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.ManifestBasedResourceGroveler
class CORDL_TYPE ManifestBasedResourceGroveler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mediator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mediator, put = __cordl_internal_set__mediator)) ::System::Resources::ResourceManager_ResourceManagerMediator* _mediator;

  /// @brief Convert operator to "::System::Resources::IResourceGroveler"
  constexpr operator ::System::Resources::IResourceGroveler*() noexcept;

  /// @brief Method CanUseDefaultResourceClasses, addr 0x5960940, size 0x144, virtual false, abstract: false, final false
  inline bool CanUseDefaultResourceClasses(::StringW readerTypeName, ::StringW resSetTypeName);

  /// @brief Method CaseInsensitiveManifestResourceStreamLookup, addr 0x5960a9c, size 0x358, virtual false, abstract: false, final false
  inline ::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::RuntimeAssembly* satellite, ::StringW name);

  /// @brief Method CreateResourceSet, addr 0x595f9dc, size 0x910, virtual false, abstract: false, final false
  inline ::System::Resources::ResourceSet* CreateResourceSet(::System::IO::Stream* store, ::System::Reflection::Assembly* assembly);

  /// @brief Method GetManifestResourceStream, addr 0x595f910, size 0xcc, virtual false, abstract: false, final false
  inline ::System::IO::Stream* GetManifestResourceStream(::System::Reflection::RuntimeAssembly* satellite, ::StringW fileName, ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetNeutralResourcesLanguage, addr 0x59605b0, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ::ByRef<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation);

  /// @brief Method GetNeutralResourcesLanguageAttribute, addr 0x59608c4, size 0x7c, virtual false, abstract: false, final false
  static inline bool GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ::ByRef<::StringW> cultureName, ::ByRef<int16_t> fallbackLocation);

  /// @brief Method GetSatelliteAssembly, addr 0x595f3ec, size 0x180, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* GetSatelliteAssembly(::System::Globalization::CultureInfo* lookForCulture, ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetSatelliteAssemblyName, addr 0x5960e98, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GetSatelliteAssemblyName();

  /// @brief Method GrovelForResourceSet, addr 0x595ef88, size 0x2b4, virtual true, abstract: false, final true
  inline ::System::Resources::ResourceSet* GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                                bool createIfNotExists, ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method HandleResourceStreamMissing, addr 0x59602ec, size 0x2ac, virtual false, abstract: false, final false
  inline void HandleResourceStreamMissing(::StringW fileName);

  /// @brief Method HandleSatelliteMissing, addr 0x595f56c, size 0x3a4, virtual false, abstract: false, final false
  inline void HandleSatelliteMissing();

  static inline ::System::Resources::ManifestBasedResourceGroveler* New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator);

  /// @brief Method UltimateFallbackFixup, addr 0x595f23c, size 0x110, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* UltimateFallbackFixup(::System::Globalization::CultureInfo* lookForCulture);

  constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& __cordl_internal_get__mediator() const;

  constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& __cordl_internal_get__mediator();

  constexpr void __cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator* value);

  /// @brief Method .ctor, addr 0x595ef80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator);

  /// @brief Convert to "::System::Resources::IResourceGroveler"
  constexpr ::System::Resources::IResourceGroveler* i___System__Resources__IResourceGroveler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManifestBasedResourceGroveler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManifestBasedResourceGroveler(ManifestBasedResourceGroveler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManifestBasedResourceGroveler(ManifestBasedResourceGroveler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3454 };

  /// @brief Field _mediator, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::ResourceManager_ResourceManagerMediator* ____mediator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::ManifestBasedResourceGroveler, ____mediator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::ManifestBasedResourceGroveler, 0x18>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ManifestBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
