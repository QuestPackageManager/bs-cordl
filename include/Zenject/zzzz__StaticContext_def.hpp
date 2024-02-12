#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StaticContext)
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class StaticContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::StaticContext);
// Type: Zenject::StaticContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10270))
// CS Name: ::Zenject::StaticContext*
class CORDL_TYPE StaticContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__container, put = setStaticF__container))::Zenject::DiContainer* _container;

  static inline void setStaticF__container(::Zenject::DiContainer* value);

  static inline ::Zenject::DiContainer* getStaticF__container();

  /// @brief Method Clear, addr 0x2f10a5c, size 0x48, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method get_HasContainer, addr 0x2f10aa4, size 0x50, virtual false, abstract: false, final false
  static inline bool get_HasContainer();

  /// @brief Method get_Container, addr 0x2f0c4d8, size 0x90, virtual false, abstract: false, final false
  static inline ::Zenject::DiContainer* get_Container();

  // Ctor Parameters [CppParam { name: "", ty: "StaticContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticContext(StaticContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticContext(StaticContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticContext();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::StaticContext, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::StaticContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::StaticContext*, "Zenject", "StaticContext");
