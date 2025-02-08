#pragma once
// IWYU pragma private; include "Zenject/BindingUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BindingUtil)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct InvalidBindResponses;
}
// Forward declare root types
namespace Zenject {
class BindingUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindingUtil);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.BindingUtil
class CORDL_TYPE BindingUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method AssertConcreteTypeListIsNotEmpty, addr 0x4b1c128, size 0x78, virtual false, abstract: false, final false
  static inline void AssertConcreteTypeListIsNotEmpty(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertDerivesFromUnityObject();

  /// @brief Method AssertDerivesFromUnityObject, addr 0x4b1ab80, size 0x94, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Type* type);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x4b1a8c4, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x4b1cad0, size 0xd8, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Type* baseType);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x4b1c7e8, size 0x2e8, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsComponent();

  /// @brief Method AssertIsComponent, addr 0x4b1b90c, size 0xdc, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Type* type);

  /// @brief Method AssertIsComponent, addr 0x4b1b650, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsDerivedFromType, addr 0x4b1bfe4, size 0x144, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromType(::System::Type* concreteType, ::System::Type* parentType);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x4b1c514, size 0x2d4, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x4b1c244, size 0x2d0, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x4b1c1a0, size 0xa4, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes, ::Zenject::InvalidBindResponses invalidBindResponse);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrComponent();

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x4b1b54c, size 0x104, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x4b1b290, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrScriptableObject();

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x4b1b18c, size 0x104, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x4b1aed0, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotAbstract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotAbstract();

  /// @brief Method AssertIsNotAbstract, addr 0x4b1bca4, size 0x84, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Type* type);

  /// @brief Method AssertIsNotAbstract, addr 0x4b1bd28, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotComponent();

  /// @brief Method AssertIsNotComponent, addr 0x4b1a7e4, size 0xe0, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Type* type);

  /// @brief Method AssertIsNotComponent, addr 0x4b1a528, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsValidGameObject, addr 0x4b1a4cc, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method AssertIsValidPrefab, addr 0x4b16c54, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidPrefab(::UnityEngine::Object* prefab);

  /// @brief Method AssertIsValidResourcePath, addr 0x4b1721c, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidResourcePath(::StringW resourcePath);

  /// @brief Method AssertTypesAreNotAbstract, addr 0x4b1b9e8, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertTypesAreNotComponents, addr 0x4b1ac14, size 0x2bc, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotComponents(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method CreateCachedProvider, addr 0x4b1cba8, size 0x104, virtual false, abstract: false, final false
  static inline ::Zenject::IProvider* CreateCachedProvider(::Zenject::IProvider* creator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingUtil(BindingUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingUtil(BindingUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindingUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingUtil*, "Zenject", "BindingUtil");
