#pragma once
// IWYU pragma private; include "Zenject/SceneContextRegistryAdderAndRemover.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
CORDL_MODULE_EXPORT(SceneContextRegistryAdderAndRemover)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SceneContextRegistry;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace Zenject {
class SceneContextRegistryAdderAndRemover;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneContextRegistryAdderAndRemover);
// Dependencies System.IDisposable, System.Object, Zenject.IInitializable
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SceneContextRegistryAdderAndRemover
class CORDL_TYPE SceneContextRegistryAdderAndRemover : public ::System::Object {
public:
  // Declarations
  /// @brief Field _registry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__registry, put = __cordl_internal_set__registry)) ::Zenject::SceneContextRegistry* _registry;

  /// @brief Field _sceneContext, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneContext, put = __cordl_internal_set__sceneContext)) ::UnityW<::Zenject::SceneContext> _sceneContext;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x4b4bf48, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x4b4bf28, size 0x20, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::Zenject::SceneContextRegistryAdderAndRemover* New_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry);

  constexpr ::Zenject::SceneContextRegistry* const& __cordl_internal_get__registry() const;

  constexpr ::Zenject::SceneContextRegistry*& __cordl_internal_get__registry();

  constexpr ::UnityW<::Zenject::SceneContext> const& __cordl_internal_get__sceneContext() const;

  constexpr ::UnityW<::Zenject::SceneContext>& __cordl_internal_get__sceneContext();

  constexpr void __cordl_internal_set__registry(::Zenject::SceneContextRegistry* value);

  constexpr void __cordl_internal_set__sceneContext(::UnityW<::Zenject::SceneContext> value);

  /// @brief Method __zenCreate, addr 0x4b4bf68, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4c080, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4befc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneContextRegistryAdderAndRemover();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12670 };

  /// @brief Field _registry, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SceneContextRegistry* ____registry;

  /// @brief Field _sceneContext, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Zenject::SceneContext> ____sceneContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SceneContextRegistryAdderAndRemover, ____registry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SceneContextRegistryAdderAndRemover, ____sceneContext) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SceneContextRegistryAdderAndRemover, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SceneContextRegistryAdderAndRemover);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistryAdderAndRemover*, "Zenject", "SceneContextRegistryAdderAndRemover");
