#pragma once
// IWYU pragma private; include "Mono/DependencyInjector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DependencyInjector)
namespace Mono {
class ISystemDependencyProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
class DependencyInjector;
}
// Write type traits
MARK_REF_PTR_T(::Mono::DependencyInjector);
// Dependencies System.Object
namespace Mono {
// Is value type: false
// CS Name: Mono.DependencyInjector
class CORDL_TYPE DependencyInjector : public ::System::Object {
public:
  // Declarations
  /// @brief Field locker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_locker, put = setStaticF_locker)) ::System::Object* locker;

  /// @brief Field systemDependency, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_systemDependency, put = setStaticF_systemDependency)) ::Mono::ISystemDependencyProvider* systemDependency;

  /// @brief Method ReflectionLoad, addr 0x3c55428, size 0x14c, virtual false, abstract: false, final false
  static inline ::Mono::ISystemDependencyProvider* ReflectionLoad();

  /// @brief Method Register, addr 0x3c55574, size 0x198, virtual false, abstract: false, final false
  static inline void Register(::Mono::ISystemDependencyProvider* provider);

  static inline ::System::Object* getStaticF_locker();

  static inline ::Mono::ISystemDependencyProvider* getStaticF_systemDependency();

  /// @brief Method get_SystemProvider, addr 0x3c55230, size 0x1f8, virtual false, abstract: false, final false
  static inline ::Mono::ISystemDependencyProvider* get_SystemProvider();

  static inline void setStaticF_locker(::System::Object* value);

  static inline void setStaticF_systemDependency(::Mono::ISystemDependencyProvider* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DependencyInjector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DependencyInjector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DependencyInjector(DependencyInjector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DependencyInjector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DependencyInjector(DependencyInjector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::DependencyInjector, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::DependencyInjector);
DEFINE_IL2CPP_ARG_TYPE(::Mono::DependencyInjector*, "Mono", "DependencyInjector");
