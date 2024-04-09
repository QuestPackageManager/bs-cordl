#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VisualElementFactoryRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Type: UnityEngine.UIElements::VisualElementFactoryRegistry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualElementFactoryRegistry*
class CORDL_TYPE VisualElementFactoryRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Factories, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_Factories,
               put = setStaticF_s_Factories))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* s_Factories;

  /// @brief Method RegisterEngineFactories, addr 0x335e1b8, size 0xb2c, virtual false, abstract: false, final false
  static inline void RegisterEngineFactories();

  /// @brief Method RegisterFactory, addr 0x335efb4, size 0x470, virtual false, abstract: false, final false
  static inline void RegisterFactory(::UnityEngine::UIElements::IUxmlFactory* factory);

  /// @brief Method RegisterUserFactories, addr 0x335ece4, size 0x2d0, virtual false, abstract: false, final false
  static inline void RegisterUserFactories();

  /// @brief Method TryGetValue, addr 0x335f424, size 0x60, virtual false, abstract: false, final false
  static inline bool TryGetValue(::StringW fullTypeName, ByRef<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*> factoryList);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* getStaticF_s_Factories();

  /// @brief Method get_factories, addr 0x335e108, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* get_factories();

  static inline void setStaticF_s_Factories(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUxmlFactory*>*>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFactoryRegistry, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFactoryRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFactoryRegistry*, "UnityEngine.UIElements", "VisualElementFactoryRegistry");
