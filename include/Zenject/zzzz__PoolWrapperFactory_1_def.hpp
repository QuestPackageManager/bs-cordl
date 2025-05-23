#pragma once
// IWYU pragma private; include "Zenject/PoolWrapperFactory_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
CORDL_MODULE_EXPORT(PoolWrapperFactory_1)
namespace System {
class Object;
}
namespace Zenject {
template <typename TValue> class IMemoryPool_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename T> class PoolWrapperFactory_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolWrapperFactory_1);
// Dependencies System.Object, Zenject.IFactory, Zenject.IFactory`1<TValue>
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Zenject.PoolWrapperFactory`1<T>
class CORDL_TYPE PoolWrapperFactory_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pool, put = __cordl_internal_set__pool)) ::Zenject::IMemoryPool_1<T>* _pool;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory_1<T>"
  constexpr operator ::Zenject::IFactory_1<T>*() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Create();

  static inline ::Zenject::PoolWrapperFactory_1<T>* New_ctor(::Zenject::IMemoryPool_1<T>* pool);

  constexpr ::Zenject::IMemoryPool_1<T>* const& __cordl_internal_get__pool() const;

  constexpr ::Zenject::IMemoryPool_1<T>*& __cordl_internal_get__pool();

  constexpr void __cordl_internal_set__pool(::Zenject::IMemoryPool_1<T>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IMemoryPool_1<T>* pool);

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  /// @brief Convert to "::Zenject::IFactory_1<T>"
  constexpr ::Zenject::IFactory_1<T>* i___Zenject__IFactory_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolWrapperFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolWrapperFactory_1(PoolWrapperFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolWrapperFactory_1(PoolWrapperFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12416 };

  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IMemoryPool_1<T>* ____pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_1, "Zenject", "PoolWrapperFactory`1");
