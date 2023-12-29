#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IFactoryProvider_6)
namespace Zenject {
class DiContainer;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract> class IFactoryProvider_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_6);
// Type: Zenject::IFactoryProvider`6
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11122), inst: 3389 }), TypeDefinitionIndex(TypeDefinitionIndex(11122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11128))
// CS Name: ::Zenject::IFactoryProvider`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract>*
class CORDL_TYPE IFactoryProvider_6 : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::IFactoryProvider_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactoryProvider_6(IFactoryProvider_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactoryProvider_6(IFactoryProvider_6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IFactoryProvider_6();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_6, "Zenject", "IFactoryProvider`6");
