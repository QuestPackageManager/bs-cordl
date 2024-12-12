#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectFactoryRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlObjectFactoryRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IBaseUxmlObjectFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlObjectFactoryRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectFactoryRegistry);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectFactoryRegistry
class CORDL_TYPE UxmlObjectFactoryRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Factories, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_Factories,
      put = setStaticF_s_Factories)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* s_Factories;

  /// @brief Method RegisterEngineFactories, addr 0x4aa1b54, size 0x230, virtual false, abstract: false, final false
  static inline void RegisterEngineFactories();

  /// @brief Method RegisterFactory, addr 0x4aa2054, size 0x49c, virtual false, abstract: false, final false
  static inline void RegisterFactory(::UnityEngine::UIElements::IBaseUxmlObjectFactory* factory);

  /// @brief Method RegisterUserFactories, addr 0x4aa1d84, size 0x2d0, virtual false, abstract: false, final false
  static inline void RegisterUserFactories();

  /// @brief Method TryGetFactories, addr 0x4aa24f0, size 0x5c, virtual false, abstract: false, final false
  static inline bool TryGetFactories(::StringW fullTypeName, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*> factoryList);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* getStaticF_s_Factories();

  /// @brief Method get_factories, addr 0x4aa1aac, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* get_factories();

  static inline void
  setStaticF_s_Factories(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectFactoryRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectFactoryRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectFactoryRegistry(UxmlObjectFactoryRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectFactoryRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectFactoryRegistry(UxmlObjectFactoryRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6278 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlObjectFactoryRegistry, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlObjectFactoryRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlObjectFactoryRegistry*, "UnityEngine.UIElements", "UxmlObjectFactoryRegistry");
