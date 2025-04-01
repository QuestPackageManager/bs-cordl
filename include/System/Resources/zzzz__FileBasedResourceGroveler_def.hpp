#pragma once
// IWYU pragma private; include "System/Resources/FileBasedResourceGroveler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FileBasedResourceGroveler)
namespace System::Resources {
class ResourceManager_ResourceManagerMediator;
}
// Forward declare root types
namespace System::Resources {
class FileBasedResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::FileBasedResourceGroveler);
// Dependencies System.Object, System.Resources.IResourceGroveler
namespace System::Resources {
// Is value type: false
// CS Name: System.Resources.FileBasedResourceGroveler
class CORDL_TYPE FileBasedResourceGroveler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mediator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mediator, put = __cordl_internal_set__mediator)) ::System::Resources::ResourceManager_ResourceManagerMediator* _mediator;

  /// @brief Convert operator to "::System::Resources::IResourceGroveler"
  constexpr operator ::System::Resources::IResourceGroveler*() noexcept;

  static inline ::System::Resources::FileBasedResourceGroveler* New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator);

  constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& __cordl_internal_get__mediator() const;

  constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& __cordl_internal_get__mediator();

  constexpr void __cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator* value);

  /// @brief Method .ctor, addr 0x3d183bc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Resources::ResourceManager_ResourceManagerMediator* mediator);

  /// @brief Convert to "::System::Resources::IResourceGroveler"
  constexpr ::System::Resources::IResourceGroveler* i___System__Resources__IResourceGroveler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileBasedResourceGroveler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileBasedResourceGroveler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileBasedResourceGroveler(FileBasedResourceGroveler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileBasedResourceGroveler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileBasedResourceGroveler(FileBasedResourceGroveler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3432 };

  /// @brief Field _mediator, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::ResourceManager_ResourceManagerMediator* ____mediator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::FileBasedResourceGroveler, ____mediator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::FileBasedResourceGroveler, 0x18>, "Size mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::FileBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FileBasedResourceGroveler*, "System.Resources", "FileBasedResourceGroveler");
