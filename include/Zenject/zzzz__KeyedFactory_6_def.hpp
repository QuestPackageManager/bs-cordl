#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__KeyedFactoryBase_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(KeyedFactory_6)
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4> class KeyedFactory_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::KeyedFactory_6);
// Type: Zenject::KeyedFactory`6
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TBase, typename TKey, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10995), inst: 3950 }), TypeDefinitionIndex(TypeDefinitionIndex(10995))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11000))
// CS Name: ::Zenject::KeyedFactory`6<TBase,TKey,TParam1,TParam2,TParam3,TParam4>*
class CORDL_TYPE KeyedFactory_6 : public ::Zenject::KeyedFactoryBase_2<TBase, TKey> {
public:
  // Declarations
  __declspec(property(get = get_ProvidedTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* ProvidedTypes;

  /// @brief Method get_ProvidedTypes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ProvidedTypes();

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TBase Create(TKey key, TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4);

  static inline ::Zenject::KeyedFactory_6<TBase, TKey, TParam1, TParam2, TParam3, TParam4>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyedFactory_6(KeyedFactory_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyedFactory_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyedFactory_6(KeyedFactory_6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyedFactory_6();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::KeyedFactory_6, "Zenject", "KeyedFactory`6");
