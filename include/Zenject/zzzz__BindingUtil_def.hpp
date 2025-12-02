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
  /// @brief Method AssertConcreteTypeListIsNotEmpty, addr 0x6c2d7d8, size 0x78, virtual false, abstract: false, final false
  static inline void AssertConcreteTypeListIsNotEmpty(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertDerivesFromUnityObject();

  /// @brief Method AssertDerivesFromUnityObject, addr 0x6c2c2ec, size 0xa0, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Type* type);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x6c2c058, size 0x294, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x6c2e11c, size 0xec, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Type* baseType);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x6c2de54, size 0x2c8, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsComponent();

  /// @brief Method AssertIsComponent, addr 0x6c2cfdc, size 0xd0, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Type* type);

  /// @brief Method AssertIsComponent, addr 0x6c2cd48, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsDerivedFromType, addr 0x6c2d670, size 0x168, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromType(::System::Type* concreteType, ::System::Type* parentType);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x6c2dba8, size 0x2ac, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x6c2d900, size 0x2a8, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x6c2d850, size 0xb0, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes, ::Zenject::InvalidBindResponses invalidBindResponse);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrComponent();

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x6c2cc48, size 0x100, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x6c2c9b4, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrScriptableObject();

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x6c2c8b4, size 0x100, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x6c2c620, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotAbstract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotAbstract();

  /// @brief Method AssertIsNotAbstract, addr 0x6c2d340, size 0x9c, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Type* type);

  /// @brief Method AssertIsNotAbstract, addr 0x6c2d3dc, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotComponent();

  /// @brief Method AssertIsNotComponent, addr 0x6c2bf84, size 0xd4, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Type* type);

  /// @brief Method AssertIsNotComponent, addr 0x6c2bcf0, size 0x294, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsValidGameObject, addr 0x6c2bc7c, size 0x74, virtual false, abstract: false, final false
  static inline void AssertIsValidGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method AssertIsValidPrefab, addr 0x6c28740, size 0x74, virtual false, abstract: false, final false
  static inline void AssertIsValidPrefab(::UnityEngine::Object* prefab);

  /// @brief Method AssertIsValidResourcePath, addr 0x6c28cdc, size 0x64, virtual false, abstract: false, final false
  static inline void AssertIsValidResourcePath(::StringW resourcePath);

  /// @brief Method AssertTypesAreNotAbstract, addr 0x6c2d0ac, size 0x294, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertTypesAreNotComponents, addr 0x6c2c38c, size 0x294, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotComponents(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method CreateCachedProvider, addr 0x6c2e208, size 0x108, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14275 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindingUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingUtil*, "Zenject", "BindingUtil");
