#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestBasedResourceGroveler)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Resources {
class __ResourceManager__ResourceManagerMediator;
}
// Forward declare root types
namespace System::Resources {
class ManifestBasedResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::ManifestBasedResourceGroveler);
// Type: System.Resources::ManifestBasedResourceGroveler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3435))
// CS Name: ::System.Resources::ManifestBasedResourceGroveler*
class CORDL_TYPE ManifestBasedResourceGroveler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mediator, offset 0x10, size 0x8
  __declspec(property(get = __get__mediator, put = __set__mediator))::System::Resources::__ResourceManager__ResourceManagerMediator* _mediator;

  /// @brief Convert operator to "::System::Resources::IResourceGroveler"
  constexpr operator ::System::Resources::IResourceGroveler*() noexcept;

  constexpr ::System::Resources::__ResourceManager__ResourceManagerMediator*& __get__mediator();

  constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__ResourceManagerMediator*> const& __get__mediator() const;

  constexpr void __set__mediator(::System::Resources::__ResourceManager__ResourceManagerMediator* value);

  static inline ::System::Resources::ManifestBasedResourceGroveler* New_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator);

  /// @brief Method .ctor addr 0x24e0f8c size 0x28 virtual false final false
  inline void _ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator);

  /// @brief Method GetNeutralResourcesLanguage addr 0x24e0fb4 size 0x320 virtual false final false
  static inline ::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* a, ByRef<::System::Resources::UltimateResourceFallbackLocation> fallbackLocation);

  /// @brief Method GetNeutralResourcesLanguageAttribute addr 0x24e12d4 size 0x74 virtual false final false
  static inline bool GetNeutralResourcesLanguageAttribute(::System::Reflection::Assembly* assembly, ByRef<::StringW> cultureName, ByRef<int16_t> fallbackLocation);

  // Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManifestBasedResourceGroveler(ManifestBasedResourceGroveler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManifestBasedResourceGroveler(ManifestBasedResourceGroveler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManifestBasedResourceGroveler();

public:
  /// @brief Field _mediator, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::__ResourceManager__ResourceManagerMediator* ____mediator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::ManifestBasedResourceGroveler, 0x18>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::ManifestBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
