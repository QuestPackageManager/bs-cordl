#pragma once
// IWYU pragma private; include "System/Resources/FileBasedResourceGroveler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FileBasedResourceGroveler)
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Resources {
class __ResourceManager__ResourceManagerMediator;
}
// Forward declare root types
namespace System::Resources {
class FileBasedResourceGroveler;
}
// Write type traits
MARK_REF_PTR_T(::System::Resources::FileBasedResourceGroveler);
// Type: System.Resources::FileBasedResourceGroveler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Resources {
// Is value type: false
// CS Name: ::System.Resources::FileBasedResourceGroveler*
class CORDL_TYPE FileBasedResourceGroveler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mediator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mediator, put = __cordl_internal_set__mediator))::System::Resources::__ResourceManager__ResourceManagerMediator* _mediator;

  /// @brief Convert operator to "::System::Resources::IResourceGroveler"
  constexpr operator ::System::Resources::IResourceGroveler*() noexcept;

  static inline ::System::Resources::FileBasedResourceGroveler* New_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator);

  constexpr ::System::Resources::__ResourceManager__ResourceManagerMediator*& __cordl_internal_get__mediator();

  constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__ResourceManagerMediator*> const& __cordl_internal_get__mediator() const;

  constexpr void __cordl_internal_set__mediator(::System::Resources::__ResourceManager__ResourceManagerMediator* value);

  /// @brief Method .ctor, addr 0x2879f9c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator);

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

  /// @brief Field _mediator, offset: 0x10, size: 0x8, def value: None
  ::System::Resources::__ResourceManager__ResourceManagerMediator* ____mediator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Resources::FileBasedResourceGroveler, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Resources::FileBasedResourceGroveler, ____mediator) == 0x10, "Offset mismatch!");

} // namespace System::Resources
NEED_NO_BOX(::System::Resources::FileBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::FileBasedResourceGroveler*, "System.Resources", "FileBasedResourceGroveler");
