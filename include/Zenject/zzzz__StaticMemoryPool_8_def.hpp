#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPool_8)
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue> class IMemoryPool_8;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template <typename TValue> class IDespawnableMemoryPool_1;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue> class StaticMemoryPool_8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_8);
// Type: Zenject::StaticMemoryPool`8
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11085)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 190 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11093))
// CS Name: ::Zenject::StaticMemoryPool`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*
class CORDL_TYPE StaticMemoryPool_8 : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
  // Declarations
  /// @brief Field _onSpawnMethod, offset 0x28, size 0x8
  __declspec(property(get = __get__onSpawnMethod, put = __set__onSpawnMethod))::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* _onSpawnMethod;

  __declspec(property(put = set_OnSpawnMethod))::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* OnSpawnMethod;

  /// @brief Convert operator to "::Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>"
  constexpr operator ::Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  constexpr ::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*& __get__onSpawnMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*> const& __get__onSpawnMethod() const;

  constexpr void __set__onSpawnMethod(::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* value);

  static inline ::Zenject::StaticMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*
  New_ctor(::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  /// @param onDespawnedMethod: ::System::Action_1<TValue>* (default: nullptr)
  inline void _ctor(::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod = nullptr);

  /// @brief Method set_OnSpawnMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_OnSpawnMethod(::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* value);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7);

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticMemoryPool_8(StaticMemoryPool_8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticMemoryPool_8(StaticMemoryPool_8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticMemoryPool_8();

public:
  /// @brief Field _onSpawnMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* ____onSpawnMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_8, "Zenject", "StaticMemoryPool`8");
