#pragma once
// IWYU pragma private; include "System/Resources/ManifestBasedResourceGroveler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestBasedResourceGroveler)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Resources {
class ResourceManager_ResourceManagerMediator;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Forward declare root types
namespace System::Resources {
class ManifestBasedResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ManifestBasedResourceGroveler);
// Dependencies System.Object, System.Resources.IResourceGroveler
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

  /// @brief Method GetNeutralResourcesLanguage, addr 0x3d1cfa0, size 0x30c, virtual false, abstract: false, final false
  static inline ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ::ByRef<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation);

  /// @brief Method GetNeutralResourcesLanguageAttribute, addr 0x3d1d2ac, size 0x78, virtual false, abstract: false, final false
  static inline bool GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ::ByRef<::StringW> cultureName, ::ByRef<int16_t> fallbackLocation);

  static inline ::System::Resources::ManifestBasedResourceGroveler* New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator);

  constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& __cordl_internal_get__mediator() const;

  constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& __cordl_internal_get__mediator();

  constexpr void __cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator* value);

  /// @brief Method .ctor, addr 0x3d1cf78, size 0x28, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3434 };

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
