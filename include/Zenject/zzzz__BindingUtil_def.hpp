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
// Type: Zenject::BindingUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::BindingUtil*
class CORDL_TYPE BindingUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method AssertConcreteTypeListIsNotEmpty, addr 0x36614d4, size 0x78, virtual false, abstract: false, final false
  static inline void AssertConcreteTypeListIsNotEmpty(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertDerivesFromUnityObject();

  /// @brief Method AssertDerivesFromUnityObject, addr 0x365ff14, size 0x94, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Type* type);

  /// @brief Method AssertDerivesFromUnityObject, addr 0x365fc54, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertDerivesFromUnityObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x3661e80, size 0xe4, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Type* baseType);

  /// @brief Method AssertInstanceDerivesFromOrEqual, addr 0x3661b9c, size 0x2e4, virtual false, abstract: false, final false
  static inline void AssertInstanceDerivesFromOrEqual(::System::Object* instance, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsComponent();

  /// @brief Method AssertIsComponent, addr 0x3660cb0, size 0xdc, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Type* type);

  /// @brief Method AssertIsComponent, addr 0x36609f0, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsDerivedFromType, addr 0x3661390, size 0x144, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromType(::System::Type* concreteType, ::System::Type* parentType);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x36618c4, size 0x2d8, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Type* concreteType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x36615f0, size 0x2d4, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes);

  /// @brief Method AssertIsDerivedFromTypes, addr 0x366154c, size 0xa4, virtual false, abstract: false, final false
  static inline void AssertIsDerivedFromTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Type*>* parentTypes, ::Zenject::InvalidBindResponses invalidBindResponse);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrComponent();

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x36608ec, size 0x104, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrComponent, addr 0x366062c, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsInterfaceOrScriptableObject();

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x3660528, size 0x104, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Type* type);

  /// @brief Method AssertIsInterfaceOrScriptableObject, addr 0x3660268, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsInterfaceOrScriptableObject(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotAbstract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotAbstract();

  /// @brief Method AssertIsNotAbstract, addr 0x366104c, size 0x84, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Type* type);

  /// @brief Method AssertIsNotAbstract, addr 0x36610d0, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsNotComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AssertIsNotComponent();

  /// @brief Method AssertIsNotComponent, addr 0x365fb74, size 0xe0, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Type* type);

  /// @brief Method AssertIsNotComponent, addr 0x365f8b4, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertIsNotComponent(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertIsValidGameObject, addr 0x365f858, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidGameObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method AssertIsValidPrefab, addr 0x365be70, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidPrefab(::UnityEngine::Object* prefab);

  /// @brief Method AssertIsValidResourcePath, addr 0x365c450, size 0x5c, virtual false, abstract: false, final false
  static inline void AssertIsValidResourcePath(::StringW resourcePath);

  /// @brief Method AssertTypesAreNotAbstract, addr 0x3660d8c, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotAbstract(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method AssertTypesAreNotComponents, addr 0x365ffa8, size 0x2c0, virtual false, abstract: false, final false
  static inline void AssertTypesAreNotComponents(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method CreateCachedProvider, addr 0x3661f64, size 0x10c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::BindingUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingUtil*, "Zenject", "BindingUtil");
