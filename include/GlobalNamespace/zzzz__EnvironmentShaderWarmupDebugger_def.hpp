#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentShaderWarmupDebugger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "Zenject/zzzz__ILateTickable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentShaderWarmupDebugger)
namespace GlobalNamespace {
class EnvironmentShaderWarmupDebugger___c;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentShaderWarmupDebugger;
}
namespace GlobalNamespace {
class EnvironmentShaderWarmupDebugger___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentShaderWarmupDebugger);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentShaderWarmupDebugger___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentShaderWarmupDebugger/<>c
class CORDL_TYPE EnvironmentShaderWarmupDebugger___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>* __9__4_0;

  static inline ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* New_ctor();

  /// @brief Method <Initialize>b__4_0, addr 0x3acaa40, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> _Initialize_b__4_0(::UnityEngine::Renderer* renderer);

  /// @brief Method .ctor, addr 0x3acaa38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>* getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::EnvironmentShaderWarmupDebugger___c* value);

  static inline void setStaticF___9__4_0(::System::Func_2<::UnityW<::UnityEngine::Renderer>, ::UnityW<::UnityEngine::Material>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentShaderWarmupDebugger___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmupDebugger___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentShaderWarmupDebugger___c(EnvironmentShaderWarmupDebugger___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmupDebugger___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentShaderWarmupDebugger___c(EnvironmentShaderWarmupDebugger___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3973 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentShaderWarmupDebugger___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, Zenject.IInitializable, Zenject.ILateTickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentShaderWarmupDebugger
class CORDL_TYPE EnvironmentShaderWarmupDebugger : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::EnvironmentShaderWarmupDebugger___c;

  /// @brief Field _allMaterialVariantHashes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__allMaterialVariantHashes,
                      put = __cordl_internal_set__allMaterialVariantHashes)) ::System::Collections::Generic::HashSet_1<::StringW>* _allMaterialVariantHashes;

  /// @brief Field _materialsThatWereNotRendered, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__materialsThatWereNotRendered,
                      put = __cordl_internal_set__materialsThatWereNotRendered)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* _materialsThatWereNotRendered;

  /// @brief Field _renderersThatWereNotRendered, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__renderersThatWereNotRendered,
                      put = __cordl_internal_set__renderersThatWereNotRendered)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* _renderersThatWereNotRendered;

  /// @brief Field _reusableStringBuilder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableStringBuilder, put = __cordl_internal_set__reusableStringBuilder)) ::System::Text::StringBuilder* _reusableStringBuilder;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::Zenject::ILateTickable"
  constexpr operator ::Zenject::ILateTickable*() noexcept;

  /// @brief Method FullMaterialLookup, addr 0x3aca370, size 0x5c4, virtual false, abstract: false, final false
  inline void FullMaterialLookup();

  /// @brief Method GetGameObjectPath, addr 0x3aca214, size 0x15c, virtual false, abstract: false, final false
  inline ::StringW GetGameObjectPath(::UnityEngine::GameObject* obj);

  /// @brief Method Initialize, addr 0x3ac9e20, size 0x188, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method JustRenderersAndInitialMaterials, addr 0x3ac9fac, size 0x268, virtual false, abstract: false, final false
  inline void JustRenderersAndInitialMaterials();

  /// @brief Method LateTick, addr 0x3ac9fa8, size 0x4, virtual true, abstract: false, final true
  inline void LateTick();

  static inline ::GlobalNamespace::EnvironmentShaderWarmupDebugger* New_ctor();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__allMaterialVariantHashes() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__allMaterialVariantHashes();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get__materialsThatWereNotRendered() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get__materialsThatWereNotRendered();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get__renderersThatWereNotRendered() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get__renderersThatWereNotRendered();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__reusableStringBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__reusableStringBuilder();

  constexpr void __cordl_internal_set__allMaterialVariantHashes(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__materialsThatWereNotRendered(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* value);

  constexpr void __cordl_internal_set__renderersThatWereNotRendered(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* value);

  constexpr void __cordl_internal_set__reusableStringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x3aca934, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Convert to "::Zenject::ILateTickable"
  constexpr ::Zenject::ILateTickable* i___Zenject__ILateTickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentShaderWarmupDebugger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmupDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentShaderWarmupDebugger(EnvironmentShaderWarmupDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmupDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentShaderWarmupDebugger(EnvironmentShaderWarmupDebugger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3974 };

  /// @brief Field _renderersThatWereNotRendered, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* ____renderersThatWereNotRendered;

  /// @brief Field _materialsThatWereNotRendered, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* ____materialsThatWereNotRendered;

  /// @brief Field _reusableStringBuilder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____reusableStringBuilder;

  /// @brief Field _allMaterialVariantHashes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____allMaterialVariantHashes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmupDebugger, ____renderersThatWereNotRendered) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmupDebugger, ____materialsThatWereNotRendered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmupDebugger, ____reusableStringBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentShaderWarmupDebugger, ____allMaterialVariantHashes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentShaderWarmupDebugger, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentShaderWarmupDebugger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentShaderWarmupDebugger*, "", "EnvironmentShaderWarmupDebugger");
NEED_NO_BOX(::GlobalNamespace::EnvironmentShaderWarmupDebugger___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentShaderWarmupDebugger___c*, "", "EnvironmentShaderWarmupDebugger/<>c");
