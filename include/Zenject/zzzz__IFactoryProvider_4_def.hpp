#pragma once
// IWYU pragma private; include "Zenject/IFactoryProvider_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
CORDL_MODULE_EXPORT(IFactoryProvider_4)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TContract> class IFactoryProvider_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_4);
// Dependencies Zenject.IFactoryProviderBase`1<TContract>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TContract>
// Is value type: false
// CS Name: Zenject.IFactoryProvider`4<TParam1,TParam2,TParam3,TContract>
class CORDL_TYPE IFactoryProvider_4 : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
  // Declarations
  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  static inline ::Zenject::IFactoryProvider_4<TParam1, TParam2, TParam3, TContract>* New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IFactoryProvider_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactoryProvider_4(IFactoryProvider_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactoryProvider_4(IFactoryProvider_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12538 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_4, "Zenject", "IFactoryProvider`4");
