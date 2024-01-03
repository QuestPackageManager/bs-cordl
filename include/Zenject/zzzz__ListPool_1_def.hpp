#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(ListPool_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Zenject {
template <typename T> class ListPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ListPool_1);
// Type: Zenject::ListPool`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11086)), TypeDefinitionIndex(TypeDefinitionIndex(3843)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst:
// 3989 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11086), inst: 2804 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11097)) CS Name: ::Zenject::ListPool`1<T>*
class CORDL_TYPE ListPool_1 : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::List_1<T>*> {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::Zenject::ListPool_1<T>* _instance;

  static inline void setStaticF__instance(::Zenject::ListPool_1<T>* value);

  static inline ::Zenject::ListPool_1<T>* getStaticF__instance();

  static inline ::Zenject::ListPool_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::ListPool_1<T>* get_Instance();

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDespawned(::System::Collections::Generic::List_1<T>* list);

  // Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListPool_1(ListPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListPool_1(ListPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListPool_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ListPool_1, "Zenject", "ListPool`1");
