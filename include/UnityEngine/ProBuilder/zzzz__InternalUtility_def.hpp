#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InternalUtility)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ProBuilder {
class __InternalUtility____c__DisplayClass7_0;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class InternalUtility;
}
namespace UnityEngine::ProBuilder {
class __InternalUtility____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::InternalUtility);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12130))
// CS Name: ::InternalUtility::<>c__DisplayClass7_0*
class CORDL_TYPE __InternalUtility____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field valid, offset 0x10, size 0x8
  __declspec(property(get = __get_valid, put = __set_valid))::StringW valid;

  constexpr ::StringW& __get_valid();

  constexpr ::StringW const& __get_valid() const;

  constexpr void __set_valid(::StringW value);

  static inline ::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor, addr 0x2b46440, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <TryParseColor>b__0, addr 0x2b46730, size 0x1c, virtual false, abstract: false, final false
  inline bool _TryParseColor_b__0(char16_t c);

  // Ctor Parameters [CppParam { name: "", ty: "__InternalUtility____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InternalUtility____c__DisplayClass7_0(__InternalUtility____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InternalUtility____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InternalUtility____c__DisplayClass7_0(__InternalUtility____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InternalUtility____c__DisplayClass7_0();

public:
  /// @brief Field valid, offset: 0x10, size: 0x8, def value: None
  ::StringW ___valid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0, ___valid) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::InternalUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12131))
// CS Name: ::UnityEngine.ProBuilder::InternalUtility*
class CORDL_TYPE InternalUtility : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0;

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetComponents(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* gameObjects);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetComponents(::UnityEngine::GameObject* go);

  /// @brief Method GetComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetComponents(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* transforms);

  /// @brief Method EmptyGameObjectWithTransform, addr 0x2b45eec, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* EmptyGameObjectWithTransform(::UnityEngine::Transform* t);

  /// @brief Method MeshGameObjectWithTransform, addr 0x2b45fd4, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* MeshGameObjectWithTransform(::StringW name, ::UnityEngine::Transform* t, ::UnityEngine::Mesh* mesh, ::UnityEngine::Material* mat, bool inheritParent);

  /// @brief Method NextEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T NextEnumValue(T current);

  /// @brief Method ControlKeyString, addr 0x2b460f0, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW ControlKeyString(char16_t character);

  /// @brief Method TryParseColor, addr 0x2b461e0, size 0x260, virtual false, abstract: false, final false
  static inline bool TryParseColor(::StringW value, ByRef<::UnityEngine::Color> col);

  /// @brief Method StringToVector3Array, addr 0x2b46448, size 0x2e8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> StringToVector3Array(::StringW str);

  /// @brief Method DemandComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DemandComponent(::UnityEngine::Component* component);

  /// @brief Method DemandComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DemandComponent(::UnityEngine::GameObject* gameObject);

  // Ctor Parameters [CppParam { name: "", ty: "InternalUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalUtility(InternalUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalUtility(InternalUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::InternalUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::InternalUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::InternalUtility*, "UnityEngine.ProBuilder", "InternalUtility");
NEED_NO_BOX(::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__InternalUtility____c__DisplayClass7_0*, "UnityEngine.ProBuilder", "InternalUtility/<>c__DisplayClass7_0");
