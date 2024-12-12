#pragma once
// IWYU pragma private; include "Zenject/StaticMemoryPool_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
CORDL_MODULE_EXPORT(StaticMemoryPool_2)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TValue> class StaticMemoryPool_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::StaticMemoryPool_2);
// Dependencies Zenject.IDespawnableMemoryPool`1<TValue>, Zenject.IMemoryPool, Zenject.IMemoryPool`2<TParam1, TValue>, Zenject.StaticMemoryPoolBase`1<TValue>
namespace Zenject {
// cpp template
template <typename TParam1, typename TValue>
// Is value type: false
// CS Name: Zenject.StaticMemoryPool`2<TParam1,TValue>
class CORDL_TYPE StaticMemoryPool_2 : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
  // Declarations
  __declspec(property(put = set_OnSpawnMethod)) ::System::Action_2<TParam1, TValue>* OnSpawnMethod;

  /// @brief Field _onSpawnMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onSpawnMethod, put = __cordl_internal_set__onSpawnMethod)) ::System::Action_2<TParam1, TValue>* _onSpawnMethod;

  /// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool"
  constexpr operator ::Zenject::IMemoryPool*() noexcept;

  /// @brief Convert operator to "::Zenject::IMemoryPool_2<TParam1,TValue>"
  constexpr operator ::Zenject::IMemoryPool_2<TParam1, TValue>*() noexcept;

  static inline ::Zenject::StaticMemoryPool_2<TParam1, TValue>* New_ctor(::System::Action_2<TParam1, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline TValue Spawn(TParam1 param);

  constexpr ::System::Action_2<TParam1, TValue>* const& __cordl_internal_get__onSpawnMethod() const;

  constexpr ::System::Action_2<TParam1, TValue>*& __cordl_internal_get__onSpawnMethod();

  constexpr void __cordl_internal_set__onSpawnMethod(::System::Action_2<TParam1, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_2<TParam1, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod);

  /// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
  constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept;

  /// @brief Convert to "::Zenject::IMemoryPool"
  constexpr ::Zenject::IMemoryPool* i___Zenject__IMemoryPool() noexcept;

  /// @brief Convert to "::Zenject::IMemoryPool_2<TParam1,TValue>"
  constexpr ::Zenject::IMemoryPool_2<TParam1, TValue>* i___Zenject__IMemoryPool_2_TParam1_TValue_() noexcept;

  /// @brief Method set_OnSpawnMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_OnSpawnMethod(::System::Action_2<TParam1, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticMemoryPool_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticMemoryPool_2(StaticMemoryPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticMemoryPool_2(StaticMemoryPool_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12424 };

  /// @brief Field _onSpawnMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<TParam1, TValue>* ____onSpawnMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_2, "Zenject", "StaticMemoryPool`2");
