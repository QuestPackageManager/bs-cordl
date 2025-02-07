#pragma once
// IWYU pragma private; include "Zenject/MonoPoolableMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(MonoPoolableMemoryPool_1)
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TValue> class MonoPoolableMemoryPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoPoolableMemoryPool_1);
// Dependencies Zenject.MemoryPool`1<TValue>
namespace Zenject {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: Zenject.MonoPoolableMemoryPool`1<TValue>
class CORDL_TYPE MonoPoolableMemoryPool_1 : public ::Zenject::MemoryPool_1<TValue> {
public:
  // Declarations
  /// @brief Field _originalParent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__originalParent, put = __cordl_internal_set__originalParent)) ::UnityW<::UnityEngine::Transform> _originalParent;

  static inline ::Zenject::MonoPoolableMemoryPool_1<TValue>* New_ctor();

  /// @brief Method OnCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCreated(TValue item);

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned(TValue item);

  /// @brief Method OnDestroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDestroyed(TValue item);

  /// @brief Method Reinitialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reinitialize(TValue item);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originalParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originalParent();

  constexpr void __cordl_internal_set__originalParent(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoPoolableMemoryPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoPoolableMemoryPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoPoolableMemoryPool_1(MonoPoolableMemoryPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoPoolableMemoryPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoPoolableMemoryPool_1(MonoPoolableMemoryPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12397 };

  /// @brief Field _originalParent, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____originalParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoPoolableMemoryPool_1, "Zenject", "MonoPoolableMemoryPool`1");
