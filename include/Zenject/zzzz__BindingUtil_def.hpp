#pragma once
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
// Type: Zenject::BindingUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10952))
// CS Name: ::Zenject::BindingUtil*
class CORDL_TYPE BindingUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method AssertIsValidPrefab, addr 0x2edbd08, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidPrefab(::UnityEngine::Object* prefab);

  /// @brief Method AssertIsValidGameObject, addr 0x2edf6f0, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method AssertIsNotComponent, addr 0x2edf74c, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotComponent();

  /// @brief Method AssertIsNotComponent, addr 0x2edfa0c, size 0xe0, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Type* type);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x2edfaec, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertDerivesFromUnityObject();

  /// @brief Method AssertDerivesFromUnityObject, addr 0x2edfdac, size 0x94, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Type* type);

  /// @brief Method AssertTypesAreNotComponents, addr 0x2edfe40, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotComponents(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsValidResourcePath, addr 0x2edc2e8, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidResourcePath(::StringW resourcePath);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x2ee0100, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrScriptableObject();

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x2ee03c0, size 0x104, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x2ee04c4, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrComponent();

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x2ee0784, size 0x104, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Type* type);

  /// @brief Method AssertIsComponent, addr 0x2ee0888, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsComponent();

  /// @brief Method AssertIsComponent, addr 0x2ee0b48, size 0xdc, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Type* type);

  /// @brief Method AssertTypesAreNotAbstract, addr 0x2ee0c24, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotAbstract, addr 0x2ee0f68, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotAbstract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotAbstract();

  /// @brief Method AssertIsNotAbstract, addr 0x2ee0ee4, size 0x84, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Type* type);

  /// @brief Method AssertIsDerivedFromType, addr 0x2ee1228, size 0x144, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromType(::System::Type* concreteType, ::System::Type* parentType);

  /// @brief Method AssertConcreteTypeListIsNotEmpty, addr 0x2ee136c, size 0x78, virtual false, abstract: false, final false
  static inline void AssertConcreteTypeListIsNotEmpty(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x2ee13e4, size 0xa4, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes, ::Zenject::InvalidBindResponses invalidBindResponse);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x2ee1488, size 0x2d4, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x2ee175c, size 0x2d8, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x2ee1a34, size 0x2e4, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x2ee1d18, size 0xe4, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Type* baseType);

  /// @brief Method CreateCachedProvider, addr 0x2ee1dfc, size 0x10c, virtual false, abstract: false, final false
  static inline ::Zenject::IProvider* CreateCachedProvider(::Zenject::IProvider* creator);

  // Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingUtil(BindingUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingUtil(BindingUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindingUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingUtil*, "Zenject", "BindingUtil");
