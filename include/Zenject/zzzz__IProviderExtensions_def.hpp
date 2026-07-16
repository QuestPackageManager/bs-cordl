#pragma once
// IWYU pragma private; include "Zenject/IProviderExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IProviderExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class IProviderExtensions;
}
// Write type traits
MARK_REF_T(::Zenject::IProviderExtensions*);
DEFINE_IL2CPP_CLASS(::Zenject::IProviderExtensions*, "Zenject", "IProviderExtensions");
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IProviderExtensions
class CORDL_TYPE IProviderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyArgList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyArgList, put = setStaticF_EmptyArgList)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* EmptyArgList;

  /// @brief Method GetAllInstances, addr 0x6e83da8, size 0xfc, virtual false, abstract: false, final false
  static inline void GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                     ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetAllInstances, addr 0x6e83d2c, size 0x7c, virtual false, abstract: false, final false
  static inline void GetAllInstances(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x6e83c28, size 0x104, virtual false, abstract: false, final false
  static inline void GetAllInstancesWithInjectSplit(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::by_ref<::System::Action*> injectAction,
                                                    ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstance, addr 0x6e84128, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context);

  /// @brief Method GetInstance, addr 0x6e8419c, size 0x258, virtual false, abstract: false, final false
  static inline ::System::Object* GetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  /// @brief Method NoDomainReloadInit, addr 0x6e83b88, size 0xa0, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method TryGetInstance, addr 0x6e83ea4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Object* TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context);

  /// @brief Method TryGetInstance, addr 0x6e83f18, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Object* TryGetInstance(::Zenject::IProvider* creator, ::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args);

  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* getStaticF_EmptyArgList();

  static inline void setStaticF_EmptyArgList(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IProviderExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProviderExtensions(IProviderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProviderExtensions(IProviderExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::IProviderExtensions) == 0x10, "Size mismatch!");

} // namespace Zenject
