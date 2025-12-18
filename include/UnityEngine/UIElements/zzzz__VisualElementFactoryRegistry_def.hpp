#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFactoryRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VisualElementFactoryRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Scripting::APIUpdating {
class MovedFromAttribute;
}
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFactoryRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFactoryRegistry);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementFactoryRegistry
class CORDL_TYPE VisualElementFactoryRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Factories, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_Factories,
      put = setStaticF_s_Factories)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* s_Factories;

  /// @brief Field s_MovedTypesFactories, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MovedTypesFactories, put = setStaticF_s_MovedTypesFactories)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* s_MovedTypesFactories;

  /// @brief Method GetMovedUIControlTypeName, addr 0x6af6468, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW GetMovedUIControlTypeName(::System::Type* type, ::UnityEngine::Scripting::APIUpdating::MovedFromAttribute* attr);

  /// @brief Method RegisterEngineFactories, addr 0x6af667c, size 0x1294, virtual false, abstract: false, final false
  static inline void RegisterEngineFactories();

  /// @brief Method RegisterFactory, addr 0x6af7c30, size 0x5dc, virtual false, abstract: false, final false
  static inline void RegisterFactory(::UnityEngine::UIElements::IUxmlFactory* factory);

  /// @brief Method RegisterUserFactories, addr 0x6af7910, size 0x320, virtual false, abstract: false, final false
  static inline void RegisterUserFactories();

  /// @brief Method TryGetValue, addr 0x6af820c, size 0xb8, virtual false, abstract: false, final false
  static inline bool TryGetValue(::StringW fullTypeName, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*> factoryList);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* getStaticF_s_Factories();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* getStaticF_s_MovedTypesFactories();

  /// @brief Method get_factories, addr 0x6af6558, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* get_factories();

  static inline void setStaticF_s_Factories(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value);

  static inline void
  setStaticF_s_MovedTypesFactories(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementFactoryRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFactoryRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementFactoryRegistry(VisualElementFactoryRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementFactoryRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementFactoryRegistry(VisualElementFactoryRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFactoryRegistry, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFactoryRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFactoryRegistry*, "UnityEngine.UIElements", "VisualElementFactoryRegistry");
