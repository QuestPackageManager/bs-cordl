#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SceneContextRegistryAdderAndRemover)
namespace Zenject {
class SceneContextRegistry;
}
namespace Zenject {
class IInitializable;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class SceneContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class SceneContextRegistryAdderAndRemover;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneContextRegistryAdderAndRemover);
// Type: Zenject::SceneContextRegistryAdderAndRemover
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11333))
// CS Name: ::Zenject::SceneContextRegistryAdderAndRemover*
class CORDL_TYPE SceneContextRegistryAdderAndRemover : public ::System::Object {
public:
  // Declarations
  /// @brief Field _registry, offset 0x10, size 0x8
  __declspec(property(get = __get__registry, put = __set__registry))::Zenject::SceneContextRegistry* _registry;

  /// @brief Field _sceneContext, offset 0x18, size 0x8
  __declspec(property(get = __get__sceneContext, put = __set__sceneContext))::Zenject::SceneContext* _sceneContext;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::Zenject::SceneContextRegistry*& __get__registry();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> const& __get__registry() const;

  constexpr void __set__registry(::Zenject::SceneContextRegistry* value);

  constexpr ::Zenject::SceneContext*& __get__sceneContext();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContext*> const& __get__sceneContext() const;

  constexpr void __set__sceneContext(::Zenject::SceneContext* value);

  static inline ::Zenject::SceneContextRegistryAdderAndRemover* New_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry);

  /// @brief Method .ctor, addr 0x2f18998, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry);

  /// @brief Method Initialize, addr 0x2f189c4, size 0x20, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method Dispose, addr 0x2f189e4, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method __zenCreate, addr 0x2f18a04, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f18b20, size 0x304, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneContextRegistryAdderAndRemover();

public:
  /// @brief Field _registry, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SceneContextRegistry* ____registry;

  /// @brief Field _sceneContext, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SceneContext* ____sceneContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneContextRegistryAdderAndRemover, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::SceneContextRegistryAdderAndRemover, ____registry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContextRegistryAdderAndRemover, ____sceneContext) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneContextRegistryAdderAndRemover);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistryAdderAndRemover*, "Zenject", "SceneContextRegistryAdderAndRemover");
