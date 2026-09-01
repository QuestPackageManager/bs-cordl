#pragma once
// IWYU pragma private; include "Zenject\StaticContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Zenject::StaticContext*);
DEFINE_IL2CPP_CLASS(::Zenject::StaticContext*, "Zenject", "StaticContext");
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.StaticContext
class CORDL_TYPE StaticContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__container, put = setStaticF__container)) ::Zenject::DiContainer* _container;

  /// @brief Method Clear, addr 0x6e75838, size 0x4c, virtual false, abstract: false, final false
  static inline void Clear();

  /// @brief Method NoDomainReloadInit, addr 0x6e757ec, size 0x4c, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  static inline ::Zenject::DiContainer* getStaticF__container();

  /// @brief Method get_Container, addr 0x6e71320, size 0x90, virtual false, abstract: false, final false
  static inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_HasContainer, addr 0x6e75884, size 0x54, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14482 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::StaticContext) == 0x10, "Size mismatch!");

} // namespace Zenject
