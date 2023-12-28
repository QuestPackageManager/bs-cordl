#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_8_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MonoPoolableMemoryPool_8)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue> class MonoPoolableMemoryPool_8;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoPoolableMemoryPool_8);
// Type: Zenject::MonoPoolableMemoryPool`8
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11045)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11045), inst: 3541 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11063))
// CS Name: ::Zenject::MonoPoolableMemoryPool`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>*
class CORDL_TYPE MonoPoolableMemoryPool_8 : public ::Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue> {
public:
  // Declarations
  /// @brief Field _originalParent, offset 0x38, size 0x8
  __declspec(property(get = __get__originalParent, put = __set__originalParent))::UnityEngine::Transform* _originalParent;

  constexpr ::UnityEngine::Transform*& __get__originalParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__originalParent() const;

  constexpr void __set__originalParent(::UnityEngine::Transform* value);

  static inline ::Zenject::MonoPoolableMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnCreated(TValue item);

  /// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDestroyed(TValue item);

  /// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDespawned(TValue item);

  /// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "MonoPoolableMemoryPool_8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoPoolableMemoryPool_8(MonoPoolableMemoryPool_8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoPoolableMemoryPool_8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoPoolableMemoryPool_8(MonoPoolableMemoryPool_8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoPoolableMemoryPool_8();

public:
  /// @brief Field _originalParent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ____originalParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoPoolableMemoryPool_8, "Zenject", "MonoPoolableMemoryPool`8");
