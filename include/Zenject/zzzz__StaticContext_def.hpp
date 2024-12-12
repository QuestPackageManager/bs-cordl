#pragma once
// IWYU pragma private; include "Zenject/StaticContext.hpp"
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
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.StaticContext
class CORDL_TYPE StaticContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__container, put = setStaticF__container)) ::Zenject::DiContainer* _container;

  /// @brief Method Clear, addr 0x4b295a4, size 0x48, virtual false, abstract: false, final false
  static inline void Clear();

  static inline ::Zenject::DiContainer* getStaticF__container();

  /// @brief Method get_Container, addr 0x4b250e8, size 0x88, virtual false, abstract: false, final false
  static inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_HasContainer, addr 0x4b295ec, size 0x50, virtual false, abstract: false, final false
  static inline bool get_HasContainer();

  static inline void setStaticF__container(::Zenject::DiContainer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticContext(StaticContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticContext(StaticContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::StaticContext, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::StaticContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::StaticContext*, "Zenject", "StaticContext");
