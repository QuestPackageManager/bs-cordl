#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolWrapperFactory_1)
namespace System {
class Object;
}
namespace Zenject {
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class IFactory;
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
// Type: Zenject::PoolWrapperFactory`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11074))
// CS Name: ::Zenject::PoolWrapperFactory`1<T>*
class CORDL_TYPE PoolWrapperFactory_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __get__pool, put = __set__pool))::Zenject::IMemoryPool_1<T>* _pool;

  /// @brief Convert operator to "::Zenject::IFactory_1<T>"
  constexpr operator ::Zenject::IFactory_1<T>*() noexcept;

  /// @brief Convert to "::Zenject::IFactory_1<T>"
  constexpr ::Zenject::IFactory_1<T>* i___Zenject__IFactory_1_T_() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  constexpr ::Zenject::IMemoryPool_1<T>*& __get__pool();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IMemoryPool_1<T>*> const& __get__pool() const;

  constexpr void __set__pool(::Zenject::IMemoryPool_1<T>* value);

  static inline ::Zenject::PoolWrapperFactory_1<T>* New_ctor(::Zenject::IMemoryPool_1<T>* pool);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IMemoryPool_1<T>* pool);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Create();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolWrapperFactory_1(PoolWrapperFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolWrapperFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolWrapperFactory_1(PoolWrapperFactory_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolWrapperFactory_1();

public:
  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IMemoryPool_1<T>* ____pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_1, "Zenject", "PoolWrapperFactory`1");
