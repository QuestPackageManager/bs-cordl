#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/InternalUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InternalUtility)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class InternalUtility___c__DisplayClass6_0;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class InternalUtility;
}
namespace UnityEngine::ProBuilder {
class InternalUtility___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::InternalUtility);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.InternalUtility/<>c__DisplayClass6_0
class CORDL_TYPE InternalUtility___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field valid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_valid, put = __cordl_internal_set_valid)) ::StringW valid;

  static inline ::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0* New_ctor();

  /// @brief Method <TryParseColor>b__0, addr 0x470d8c0, size 0x1c, virtual false, abstract: false, final false
  inline bool _TryParseColor_b__0(char16_t c);

  constexpr ::StringW const& __cordl_internal_get_valid() const;

  constexpr ::StringW& __cordl_internal_get_valid();

  constexpr void __cordl_internal_set_valid(::StringW value);

  /// @brief Method .ctor, addr 0x470d8b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalUtility___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalUtility___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalUtility___c__DisplayClass6_0(InternalUtility___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalUtility___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalUtility___c__DisplayClass6_0(InternalUtility___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14243 };

  /// @brief Field valid, offset: 0x10, size: 0x8, def value: None
  ::StringW ___valid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0, ___valid) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.InternalUtility
class CORDL_TYPE InternalUtility : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0;

  /// @brief Method ControlKeyString, addr 0x470d54c, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW ControlKeyString(char16_t character);

  /// @brief Method DemandComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DemandComponent(::UnityEngine::Component* component);

  /// @brief Method DemandComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DemandComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method EmptyGameObjectWithTransform, addr 0x470d348, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> EmptyGameObjectWithTransform(::UnityEngine::Transform* t);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetComponents(::UnityEngine::GameObject* go);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetComponents(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* transforms);

  /// @brief Method MeshGameObjectWithTransform, addr 0x470d430, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> MeshGameObjectWithTransform(::StringW name, ::UnityEngine::Transform* t, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat,
                                                                                bool inheritParent);

  /// @brief Method NextEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T NextEnumValue(T current);

  /// @brief Method TryParseColor, addr 0x470d65c, size 0x25c, virtual false, abstract: false, final false
  static inline bool TryParseColor(::StringW value, ::ByRef<::UnityEngine::Color> col);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalUtility(InternalUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalUtility(InternalUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::InternalUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::InternalUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::InternalUtility*, "UnityEngine.ProBuilder", "InternalUtility");
NEED_NO_BOX(::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::InternalUtility___c__DisplayClass6_0*, "UnityEngine.ProBuilder", "InternalUtility/<>c__DisplayClass6_0");
