#pragma once
// IWYU pragma private; include "GlobalNamespace/ZenjectExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZenjectExtensions)
namespace GlobalNamespace {
template <typename T> class ZenjectExtensions___c__DisplayClass0_0_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace GlobalNamespace {
class ZenjectExtensions;
}
namespace GlobalNamespace {
template <typename T> class ZenjectExtensions___c__DisplayClass0_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ZenjectExtensions);
MARK_GEN_REF_PTR_T(::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ZenjectExtensions/<>c__DisplayClass0_0`1<T>
class CORDL_TYPE ZenjectExtensions___c__DisplayClass0_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform> parent;

  static inline ::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>* New_ctor();

  /// @brief Method <InstantiatePrefabForComponentAt>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> _InstantiatePrefabForComponentAt_b__0(::Zenject::InjectContext* _);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent();

  constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectExtensions___c__DisplayClass0_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectExtensions___c__DisplayClass0_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectExtensions___c__DisplayClass0_0_1(ZenjectExtensions___c__DisplayClass0_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectExtensions___c__DisplayClass0_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectExtensions___c__DisplayClass0_0_1(ZenjectExtensions___c__DisplayClass0_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23342 };

  /// @brief Field parent, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZenjectExtensions
class CORDL_TYPE ZenjectExtensions : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass0_0_1 = ::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>;

  /// @brief Method InstantiatePrefabForComponentAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline T InstantiatePrefabForComponentAt(::Zenject::DiContainer* container, ::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                  ::UnityEngine::Transform* parent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectExtensions(ZenjectExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectExtensions(ZenjectExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ZenjectExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ZenjectExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ZenjectExtensions*, "", "ZenjectExtensions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1, "", "ZenjectExtensions/<>c__DisplayClass0_0`1");
