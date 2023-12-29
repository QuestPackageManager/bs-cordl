#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IFactoryProvider_5)
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class IFactoryProvider_5;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_5);
// Type: Zenject::IFactoryProvider`5
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11122)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11122), inst: 3388 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11127))
// CS Name: ::Zenject::IFactoryProvider`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE IFactoryProvider_5 : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::IFactoryProvider_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactoryProvider_5(IFactoryProvider_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactoryProvider_5(IFactoryProvider_5 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IFactoryProvider_5();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_5, "Zenject", "IFactoryProvider`5");
