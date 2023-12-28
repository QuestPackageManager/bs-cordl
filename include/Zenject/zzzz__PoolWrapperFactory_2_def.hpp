#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolWrapperFactory_2)
namespace Zenject {
template <typename TParam1, typename TValue> class IMemoryPool_2;
}
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TValue> class PoolWrapperFactory_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolWrapperFactory_2);
// Type: Zenject::PoolWrapperFactory`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11075))
// CS Name: ::Zenject::PoolWrapperFactory`2<TParam1,TValue>*
class CORDL_TYPE PoolWrapperFactory_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __get__pool, put = __set__pool))::Zenject::IMemoryPool_2<TParam1, TValue>* _pool;

  /// @brief Convert operator to "::Zenject::IFactory_2<TParam1,TValue>"
  constexpr operator ::Zenject::IFactory_2<TParam1, TValue>*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  constexpr ::Zenject::IMemoryPool_2<TParam1, TValue>*& __get__pool();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_2<TParam1, TValue>*> const& __get__pool() const;

  constexpr void __set__pool(::Zenject::IMemoryPool_2<TParam1, TValue>* value);

  static inline ::Zenject::PoolWrapperFactory_2<TParam1, TValue>* New_ctor(::Zenject::IMemoryPool_2<TParam1, TValue>* pool);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::IMemoryPool_2<TParam1, TValue>* pool);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TValue Create(TParam1 arg);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolWrapperFactory_2(PoolWrapperFactory_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolWrapperFactory_2(PoolWrapperFactory_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolWrapperFactory_2();

public:
  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IMemoryPool_2<TParam1, TValue>* ____pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_2, "Zenject", "PoolWrapperFactory`2");
